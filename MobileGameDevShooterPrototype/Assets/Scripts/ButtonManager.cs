using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class ButtonManager : MonoBehaviour
{
    public GameObject GameTitle;
    public GameObject ShootingJoystick;
    public GameObject MovementJoystick;

    public GameObject MainMenu;
    public GameObject SettingsMenu;

    public PlayerController PlayerControl;

    // Start is called before the first frame update
    void Start()
    {
        ShootingJoystick.SetActive(false);
        MovementJoystick.SetActive(false);

        SettingsMenu.SetActive(false);
    }

    public void StartGame()
    {
        switch (PlayerControl.ControlType)
        {
            case 1:
                MovementJoystick.SetActive(true);
                break;
            case 2:
                ShootingJoystick.SetActive(true);
                MovementJoystick.SetActive(true);
                break;
            case 3:
                Input.gyro.enabled = true;
                InputSystem.EnableDevice(UnityEngine.InputSystem.Gyroscope.current);
                break;
        }

        GameTitle.SetActive(false);
        MainMenu.SetActive(false);

        PlayerControl.GameStarted = true;
    }

    public void OpenSettingsMenu()
    {
        MainMenu.SetActive(false);

        SettingsMenu.SetActive(true);
    }

    public void CloseSettingMenu()
    {
        SettingsMenu.SetActive(false);
        MainMenu.SetActive(true);
    }

    public void SetOneJoystick()
    {
        PlayerControl.ControlType = 1;
    }

    public void SetTwoJoysticks()
    {
        PlayerControl.ControlType = 2;
    }

    public void SetGyroControl()
    {
        PlayerControl.ControlType = 3;
    }
}
