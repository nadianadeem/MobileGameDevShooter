using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerController : MonoBehaviour
{
    private CharacterController controller;
    private PlayerInput playerInput;
    private Animator PlayerAnimator;
    private Vector3 playerVelocity;
    private bool groundedPlayer;
    private float playerSpeed = 2.0f;
    private float gravityValue = -9.81f;

    private void Start()
    {
        controller = gameObject.GetComponent<CharacterController>();
        playerInput = GetComponent<PlayerInput>();
        PlayerAnimator = GetComponent<Animator>();
    }

    void Update()
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
            gameObject.transform.position = MovementVector;
            PlayerAnimator.SetBool("IsWalking", true);
        }
        else
        {
            PlayerAnimator.SetBool("IsWalking", false);
        }

        Vector2 LookInput = playerInput.actions["Look"].ReadValue<Vector2>();
        Vector3 LookVector = new Vector3(LookInput.x, gameObject.transform.position.y, LookInput.y);

        if(LookInput.x != 0.0f || LookInput.y != 0.0f)
        {
            transform.LookAt(LookVector);
        }

        playerVelocity.y += gravityValue * Time.deltaTime;
        controller.Move(playerVelocity * Time.deltaTime);
    }
}
