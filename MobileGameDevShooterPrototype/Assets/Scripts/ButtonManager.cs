using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.UI;

public class ButtonManager : MonoBehaviour
{
    public GameObject GameTitle;
    public GameObject ShootingJoystick;
    public GameObject MovementJoystick;
    public GameObject GyroOption;
    public GameObject timer;

    public GameObject MainMenu;
    public GameObject SettingsMenu;

    public Text ControllerText;
    public PlayerController PlayerControl;

    // Start is called before the first frame update
    void Start()
    {
        SetControllerType(2);
        ShootingJoystick.SetActive(false);
        MovementJoystick.SetActive(false);

        SettingsMenu.SetActive(false);
        timer.SetActive(false);
    }

    void SetControllerType(int InControlType)
    {
        PlayerControl.ControlType = InControlType;

        switch (PlayerControl.ControlType)
        {
            case 1:
                ControllerText.text = "SELECTED: JOYSTICK + AUTO AIM";
                break;
            case 2:
                ControllerText.text = "SELECTED: JOYSTICKS MOVE + AIM";
                break;
            case 3:
                if (SystemInfo.supportsGyroscope)
                {
                    ControllerText.text = "SELECTED: GYRO + AUTO AIM";
                }
                break;
        }
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
        Timer timerScript = timer.GetComponent<Timer>();
        timerScript.timerActive = true;
        timer.SetActive(true);
    }

    public void OpenMainMenu()
    {
        timer.SetActive(false);
        GameTitle.SetActive(true);
        MainMenu.SetActive(true);

        Timer timerScript = timer.GetComponent<Timer>();
        timerScript.ResetTimer();
        timerScript.timerActive = false;
    }

    public void OpenSettingsMenu()
    {
        MainMenu.SetActive(false);
        SettingsMenu.SetActive(true);

        if (!SystemInfo.supportsGyroscope)
        {
            GyroOption.SetActive(false);
        }
    }

    public void CloseSettingMenu()
    {
        SettingsMenu.SetActive(false);
        MainMenu.SetActive(true);
    }

    public void SetOneJoystick()
    {
        SetControllerType(1);
    }

    public void SetTwoJoysticks()
    {
        SetControllerType(2);
    }

    public void SetGyroControl()
    {
        SetControllerType(3);
    }
}
