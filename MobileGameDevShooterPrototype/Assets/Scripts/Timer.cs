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
#if ENABLE_CLOUD_SERVICES_ANALYTICS
        Analytics.CustomEvent("playerDied", new Dictionary<string, object>
        {
            { "timeSurvived", Mathf.Floor(currentTime) },
            { "timeSurvivedStr", currentTimeText.text },
            { "enemiesKilled", enemiesKilled }
        });
#endif
    }

    public void ResetTimer()
    {
        if(currentTime >= 0)
        {
            SendTimerEvent();
        }
        
        currentTime = 0;
        enemiesKilled = 0;
    }
}
