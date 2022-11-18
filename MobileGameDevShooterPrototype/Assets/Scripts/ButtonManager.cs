using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.UI;
using System;
using GooglePlayGames;

public class ButtonManager : MonoBehaviour
{
    public GameObject GameTitle;
    public GameObject ShootingJoystick;
    public GameObject MovementJoystick;
    public GameObject GyroOption;
    public GameObject timer;
    public GameObject PauseButton;

    public GameObject DeathMenu;
    public GameObject MainMenu;
    public GameObject SettingsMenu;
    public GameObject PauseMenu;

    public Text highscore;
    public Text ControllerText;
    public PlayerController PlayerControl;

    public Button AdButton;

    private Timer timerScript;

    // Start is called before the first frame update
    void Start()
    {
        SetControllerType(2);
        ShootingJoystick.SetActive(false);
        MovementJoystick.SetActive(false);

        SettingsMenu.SetActive(false);
        timer.SetActive(false);
        PauseButton.SetActive(false);
        DeathMenu.SetActive(false);
        PauseMenu.SetActive(false);

        highscore.text = "HIGHSCORE - " + TimeSpan.FromSeconds(PlayerPrefs.GetFloat("TimeSurvived")).ToString(@"mm\:ss");
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

    public void ShowLeaderboard()
    {
        PlayGamesPlatform.Instance.ShowLeaderboardUI("CggIu67eoggQAhAC");
    }

    public void ShowAchievements()
    {
        Social.ShowAchievementsUI();
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

        Time.timeScale = 1;

        GameTitle.SetActive(false);
        MainMenu.SetActive(false);

        PlayerControl.GameStarted = true;
        timerScript = timer.GetComponent<Timer>();
        timerScript.timerActive = true;
        timer.SetActive(true);
        PauseButton.SetActive(true);
        AdButton.interactable = true;
    }

    public void OpenMainMenu()
    {
        ShootingJoystick.SetActive(false);
        MovementJoystick.SetActive(false);
        timer.SetActive(false);
        PauseButton.SetActive(false);
        PauseMenu.SetActive(false);
        GameTitle.SetActive(true);
        MainMenu.SetActive(true);
        highscore.text = "HIGHSCORE - " + TimeSpan.FromSeconds(PlayerPrefs.GetFloat("TimeSurvived")).ToString(@"mm\:ss");
    }

    public void OpenDeathMenu()
    {
        DeathMenu.SetActive(true);
        timerScript.timerActive = false;
    }

    public void CloseDeathMenu()
    {
        DeathMenu.SetActive(false);
        timerScript.timerActive = true;
    }

    public void ExitGame()
    {
        DeathMenu.SetActive(false);
        Timer timerScript = timer.GetComponent<Timer>();
        timerScript.ResetTimer();
        timerScript.timerActive = false;
        OpenMainMenu();
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

    public void OpenPauseMenu()
    {
        PauseMenu.SetActive(true);
        PauseButton.SetActive(false);
        Time.timeScale = 0;
    }

    public void ClosePauseMenu()
    {
        PauseMenu.SetActive(false);
        PauseButton.SetActive(true);
        Time.timeScale = 1;
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
