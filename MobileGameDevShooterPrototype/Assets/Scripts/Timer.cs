using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using UnityEngine.Analytics;
using Unity.Services.Core;
using Unity.Services.Analytics;

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

    // Start is called before the first frame update
    void Start()
    {
        currentTime = 0;
        adShower.LoadInterstitialAd();
        adShower.LoadRewardedAd(RewardedAdButton);
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
