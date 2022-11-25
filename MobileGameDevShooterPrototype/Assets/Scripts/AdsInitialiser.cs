using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.UI;
using UnityEngine.Advertisements;
using Unity.Services.Analytics;

public class AdsInitialiser : MonoBehaviour, IUnityAdsInitializationListener, IUnityAdsLoadListener, IUnityAdsShowListener
{
    Button AdButton;
    [SerializeField] string _androidGameId;
    [SerializeField] bool _testMode = true;
    public ButtonManager buttonManager;

    private PlayerController playerController;
    private bool grantReward = false;

    void Awake()
    {
        InitializeAds();
    }

    void Start()
    {
        playerController = GameObject.Find("PlayerObj").GetComponent<PlayerController>();
    }

    void Update()
    {
        if(grantReward)
        {
            Dictionary<string, object> parameters = new Dictionary<string, object>() {};
            AnalyticsService.Instance.CustomData("WatchedAdForLife", parameters);

            AnalyticsService.Instance.Flush();

            // Optional - You can call Events.Flush() to send the event immediately
            AnalyticsService.Instance.Flush();

            buttonManager.CloseDeathMenu();
            playerController.ResetPlayerValuesAfterAd();
            playerController.watchedRewardedAd = true;
            grantReward = false;
        }
    }

    public void InitializeAds()
    {
        Advertisement.Initialize(_androidGameId, _testMode, this);
    }

    public void OnInitializationComplete()
    {
        Debug.Log("Unity Ads initialization complete.");
    }

    public void OnInitializationFailed(UnityAdsInitializationError error, string message)
    {
        Debug.Log($"Unity Ads Initialization Failed: {error.ToString()} - {message}");
    }

    // Load content to the Ad Unit:
    public void LoadInterstitialAd()
    {
        // IMPORTANT! Only load content AFTER initialization (in this example, initialization is handled in a different script).
        Debug.Log("Loading Ad: " + _androidGameId);
        Advertisement.Load("Interstitial_Android", this);
    }
 
    // Show the loaded content in the Ad Unit:
    public void ShowInterstitialAd()
    {
        // Note that if the ad content wasn't previously loaded, this method will fail
        Debug.Log("Showing Ad: " + _androidGameId);
        Advertisement.Show("Interstitial_Android", this);
        Advertisement.Load("Interstitial_Android", this);
    }

    // Load content to the Ad Unit:
    public void LoadRewardedAd(Button _AdButton)
    {
        AdButton = _AdButton;
        Debug.Log("Loading Ad: " + _androidGameId);
        Advertisement.Load("Rewarded_Android", this);

    }

    // Show the loaded content in the Ad Unit:
    public void ShowRewardedAd()
    {
        // Note that if the ad content wasn't previously loaded, this method will fail
        Debug.Log("Showing Ad: " + _androidGameId);
        // Disable the button:
        AdButton.interactable = false;
        // Then show the ad:
        Advertisement.Show("Rewarded_Android", this);
    }

    // Implement Load Listener and Show Listener interface methods: 
    public void OnUnityAdsAdLoaded(string adUnitId)
    {
        if(playerController.watchedRewardedAd == false)
        {
            Debug.Log("Ad Loaded: " + adUnitId);
            // Optionally execute code if the Ad Unit successfully loads content.
            if (adUnitId.Equals("Rewarded_Android"))
            {
                // Configure the button to call the ShowAd() method when clicked:
                AdButton.onClick.AddListener(ShowRewardedAd);
                // Enable the button for users to click:
                AdButton.interactable = true;
            }
        }
    }

    public void OnUnityAdsFailedToLoad(string adUnitId, UnityAdsLoadError error, string message)
    {
        Debug.Log($"Error loading Ad Unit: {adUnitId} - {error.ToString()} - {message}");
        // Optionally execute code if the Ad Unit fails to load, such as attempting to try again.
        buttonManager.ExitGame();
    }

    public void OnUnityAdsShowFailure(string adUnitId, UnityAdsShowError error, string message)
    {
        Debug.Log($"Error showing Ad Unit {adUnitId}: {error.ToString()} - {message}");
        // Optionally execute code if the Ad Unit fails to show, such as loading another ad.
        Advertisement.Load(adUnitId, this);
        buttonManager.ExitGame();
    }

    public void OnUnityAdsShowStart(string adUnitId) { }
    public void OnUnityAdsShowClick(string adUnitId) { }
    public void OnUnityAdsShowComplete(string adUnitId, UnityAdsShowCompletionState showCompletionState) 
    {
        if (adUnitId.Equals("Rewarded_Android") && showCompletionState.Equals(UnityAdsShowCompletionState.COMPLETED))
        {
            Debug.Log("Unity Ads Rewarded Ad Completed");
            // Grant a reward.
            grantReward = true;
            AdButton.interactable = false;
        }

        // Load another ad:
        Advertisement.Load("Rewarded_Android", this);
    }
}