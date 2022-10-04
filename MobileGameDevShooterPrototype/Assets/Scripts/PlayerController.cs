using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerController : MonoBehaviour
{
    //Integer to represent control type. Default is 2.
    //1: One Joystick with autoaim. 2: Two Joysticks no auto aim. 3: Gyro controls with auto aim.
    public int ControlType = 2;
    public bool GameStarted;

    private CharacterController controller;
    private PlayerInput playerInput;
    private Animator PlayerAnimator;
    private Vector3 playerVelocity;
    private bool groundedPlayer;
    private float playerSpeed = 2.0f;
    private float gravityValue = -9.81f;
    float RotY;
    float RotX;

    private void Start()
    {
        controller = gameObject.GetComponent<CharacterController>();
        playerInput = GetComponent<PlayerInput>();
        PlayerAnimator = GetComponent<Animator>();
    }

    void FixedUpdate()
    {
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
                    gameObject.transform.position += MovementVector * Time.deltaTime * playerSpeed;
                    PlayerAnimator.SetBool("IsWalking", true);
                }
                else
                {
                    PlayerAnimator.SetBool("IsWalking", false);
                }

                playerVelocity.y += gravityValue * Time.deltaTime;
                controller.Move(playerVelocity * Time.deltaTime);
            }

            if (ControlType == 2)
            {
                Vector2 LookInput = playerInput.actions["Look"].ReadValue<Vector2>();
                Vector3 LookVector = new Vector3(LookInput.x, 0, LookInput.y);

                if (LookInput.x != 0.0f || LookInput.y != 0.0f)
                {
                    transform.LookAt(LookVector);
                }

                playerVelocity.y += gravityValue * Time.deltaTime;
                controller.Move(playerVelocity * Time.deltaTime);
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
                    PlayerAnimator.SetBool("IsWalking", true);
                }
                else
                {
                    PlayerAnimator.SetBool("IsWalking", false);
                }

                playerVelocity.y += gravityValue * Time.deltaTime;
                controller.Move(playerVelocity * Time.deltaTime);
            }
        }
    }
}
