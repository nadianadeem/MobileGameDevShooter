using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using UnityEngine.Analytics;
using Unity.Services.Core;
using Unity.Services.Analytics;
using GooglePlayGames;

//Made using tutorial: https://www.youtube.com/watch?v=HLz_k6DSQvU

public class Timer : MonoBehaviour
{
    public AdsInitialiser adShower;
    public Button RewardedAdButton;
    public Spawner enemySpawner;
    public int difficultyIncrease = 25;
    public int enemiesKilled;
    public bool timerActive = false;
    float currentTime;
    public Text currentTimeText;
    private bool isGoogleServiceEnabled = false;

    // Start is called before the first frame update
    void Start()
    {
        currentTime = 0;
        adShower.LoadInterstitialAd();
        adShower.LoadRewardedAd(RewardedAdButton);

        PlayGamesPlatform.Activate();
        Social.localUser.Authenticate(success => {
            if (success)
            {
                Debug.Log("Authentication successful");
                string userInfo = "Username: " + Social.localUser.userName +
                    "\nUser ID: " + Social.localUser.id +
                    "\nIsUnderage: " + Social.localUser.underage;
                Debug.Log(userInfo);
                isGoogleServiceEnabled = true;
            }
            else
                Debug.Log("Authentication failed");
        });
    }

    // Update is called once per frame
    void Update()
    {
        if (timerActive)
        {
            currentTime = currentTime + Time.deltaTime;
            TimeSpan time = TimeSpan.FromSeconds(currentTime);
            currentTimeText.text = time.ToString(@"mm\:ss");

            if(currentTime <= difficultyIncrease && currentTime >= difficultyIncrease && enemySpawner.timeBetweenEnemySpawns >= enemySpawner.minimumTimeBetweenSpawns)
            {
                enemySpawner.timeBetweenEnemySpawns -= 0.2f;
                difficultyIncrease += 30;
            }
        }
    }

    public void AchievementCallback(bool result)
    {
        Debug.Log("100 enemies killed, achievment Unlocked.");
    }

    public void SendTimerEvent()
    {
        Dictionary<string, object> parameters = new Dictionary<string, object>()
        {
            { "enemiesKilled", enemiesKilled },
            { "timeSurvived", Mathf.Floor(currentTime) },
            { "timeSurvivedStr", currentTimeText.text }
        };
        // The ‘myEvent’ event will get queued up and sent every minute
        AnalyticsService.Instance.CustomData("playerDied", parameters);

        // Optional - You can call Events.Flush() to send the event immediately
        AnalyticsService.Instance.Flush();

        if(isGoogleServiceEnabled && enemiesKilled >= 100)
        {
            // Submit achievement to original default social platform
            Social.ReportProgress("CggIu67eoggQAhAB.", 100.0f, AchievementCallback);

            // Submit achievement to Google Play
            PlayGamesPlatform.Instance.ReportProgress("CggIu67eoggQAhAB.", 100.0f, AchievementCallback);
        }

        if (isGoogleServiceEnabled && enemiesKilled >= 200)
        {
            // Submit achievement to original default social platform
            Social.ReportProgress("CggIu67eoggQAhAD.", 100.0f, AchievementCallback);

            // Submit achievement to Google Play
            PlayGamesPlatform.Instance.ReportProgress("CggIu67eoggQAhAD.", 100.0f, AchievementCallback);
        }

        if (isGoogleServiceEnabled && enemiesKilled >= 300)
        {
            // Submit achievement to original default social platform
            Social.ReportProgress("CggIu67eoggQAhAE.", 100.0f, AchievementCallback);

            // Submit achievement to Google Play
            PlayGamesPlatform.Instance.ReportProgress("CggIu67eoggQAhAE.", 100.0f, AchievementCallback);
        }

        if (isGoogleServiceEnabled && enemiesKilled >= 400)
        {
            // Submit achievement to original default social platform
            Social.ReportProgress("CggIu67eoggQAhAF.", 100.0f, AchievementCallback);

            // Submit achievement to Google Play
            PlayGamesPlatform.Instance.ReportProgress("CggIu67eoggQAhAF.", 100.0f, AchievementCallback);
        }

        if (isGoogleServiceEnabled && enemiesKilled >= 500)
        {
            // Submit achievement to original default social platform
            Social.ReportProgress("CggIu67eoggQAhAG.", 100.0f, AchievementCallback);

            // Submit achievement to Google Play
            PlayGamesPlatform.Instance.ReportProgress("CggIu67eoggQAhAG.", 100.0f, AchievementCallback);
        }

        TimeSpan time = TimeSpan.FromSeconds(currentTime);
        Social.ReportScore((long)time.TotalMinutes, "CggIu67eoggQAhAC", (bool success) => {});
    }

    public void ResetTimer()
    {
        if(currentTime >= 0)
        {
            SendTimerEvent();
            if(currentTime > PlayerPrefs.GetFloat("TimeSurvived"))
            {
                PlayerPrefs.SetFloat("TimeSurvived", currentTime);
            }
            adShower.ShowInterstitialAd();
        }
        
        currentTime = 0;
        enemiesKilled = 0;
    }
}
