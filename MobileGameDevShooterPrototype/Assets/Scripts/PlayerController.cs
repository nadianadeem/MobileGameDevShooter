using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerController : MonoBehaviour
{
    //Integer to represent control type. Default is 2.
    //1: One Joystick with autoaim. 2: Two Joysticks no auto aim. 3: Gyro controls with auto aim.
    public int ControlType;
    public bool GameStarted = false;
    public int health = 100;
    public Transform spawnPoint;
    public ButtonManager buttonManager;
    public BulletManager bm;
    public bool watchedRewardedAd;
    public float playerSpeed = 2.0f;
    public Animator playerAnimator;
    public CameraShake cameraShake;

    private float distance;
    private GameObject[] enemies;
    private GameObject target;

    private CharacterController controller;
    private PlayerInput playerInput;
    private Vector3 playerVelocity;
    private bool groundedPlayer;
    private float gravityValue = -9.81f;
    float RotY;
    float RotX;

    private void Start()
    {
        controller = gameObject.GetComponent<CharacterController>();
        playerInput = GetComponent<PlayerInput>();
        playerAnimator = gameObject.GetComponent<Animator>();
        bm.IsFiring = true;
    }

    public void ResetPlayerValuesAfterAd()
    {
        health = 100;
        GameStarted = true;
    }

    void FixedUpdate()
    {
        enemies = GameObject.FindGameObjectsWithTag("Enemy");
        if (GameStarted)
        {
            if(ControlType == 1 || ControlType == 2)
            {
                groundedPlayer = controller.isGrounded;
                if (groundedPlayer && playerVelocity.y < 0)
                {
                    playerVelocity.y = 0f;
                }

                Vector2 MovementInput = playerInput.actions["Movement"].ReadValue<Vector2>();
                Vector3 MovementVector = new Vector3(MovementInput.x, 0, MovementInput.y);

                controller.Move(MovementVector * Time.deltaTime * playerSpeed);

                if (MovementVector != Vector3.zero)
                {
                    float angleBetweenVectors = Vector3.Angle(gameObject.transform.position.normalized, this.transform.forward);

                    if (angleBetweenVectors > 45)
                    {
                        playerAnimator.SetBool("IsWalkingBackwards", true); // reverse
                        playerAnimator.SetBool("IsWalkingForwards", false);
                    }
                    else
                    {
                        playerAnimator.SetBool("IsWalkingBackwards", false); // forwards
                        playerAnimator.SetBool("IsWalkingForwards", true);
                    }

                    gameObject.transform.position += MovementVector * Time.deltaTime * playerSpeed;
                }
                else
                {
                    playerAnimator.SetBool("IsWalkingForwards", false);
                    playerAnimator.SetBool("IsWalkingBackwards", false);
                }

                playerVelocity.y += gravityValue * Time.deltaTime;
                controller.Move(playerVelocity * Time.deltaTime);
            }

            if (ControlType == 2)
            {
                Vector2 LookInput = playerInput.actions["Look"].ReadValue<Vector2>();
                Vector3 playerDirection = Vector3.right * LookInput.x + Vector3.forward * LookInput.y;

                if (LookInput.x != 0.0f || LookInput.y != 0.0f)
                {
                    Quaternion newRotation = Quaternion.LookRotation(playerDirection);
                    gameObject.transform.rotation = Quaternion.RotateTowards(gameObject.transform.rotation, newRotation, 500.0f * Time.deltaTime);
                }
            }
            
            if(ControlType == 3)
            {
                RotY += Input.gyro.rotationRateUnbiased.y/2;
                RotX += Input.gyro.rotationRateUnbiased.x/2;
                Vector3 GyroVector = new Vector3(RotY, 0, -RotX);

                controller.Move(GyroVector * Time.deltaTime * 0.5f);

                if (GyroVector != Vector3.zero)
                {
                    gameObject.transform.position = GyroVector * Time.deltaTime * 1.0f;
                }

                playerVelocity.y += gravityValue * Time.deltaTime;
                controller.Move(playerVelocity * Time.deltaTime);
            }

            if(ControlType == 1 || ControlType == 3)
            {
                distance = 20;
                for (int i = 0; i < enemies.Length; i++)
                {
                    if (Vector2.Distance(this.transform.position, enemies[i].transform.position) < distance)
                    {
                        distance = Vector2.Distance(this.transform.position, enemies[i].transform.position);

                        target = enemies[i];
                    }

                    //this prevents a nasty loop that causes the minimum range for a target to be chosen to become shorter and shorter
                    if (Vector2.Distance(this.transform.position, enemies[i].transform.position) > distance)
                    {
                        distance = Vector2.Distance(this.transform.position, enemies[i].transform.position);
                    }
                }

                if(target != null)
                {
                    Vector2 LookInput = new Vector2(target.transform.position.x, target.transform.position.z);
                    Vector3 playerDirection = Vector3.right * LookInput.x + Vector3.forward * LookInput.y;

                    if (LookInput.x != 0.0f || LookInput.y != 0.0f)
                    {
                        Quaternion newRotation = Quaternion.LookRotation(playerDirection);
                        gameObject.transform.rotation = Quaternion.RotateTowards(gameObject.transform.rotation, newRotation, 200.0f * Time.deltaTime);
                    }
                }
            }

            if (health <= 0)
            {
                cameraShake.ShakeElapsedTime = cameraShake.ShakeDuration;
                transform.position = spawnPoint.position;
                GameStarted = false;
                buttonManager.OpenDeathMenu();
                GameStarted = false;

                GameObject[] others = (GameObject[])GameObject.FindGameObjectsWithTag("Enemy");
                foreach (GameObject other in others)
                { Destroy(other.gameObject); }
                health = 100;
            }
        }
    }
}
