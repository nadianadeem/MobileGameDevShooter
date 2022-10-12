using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PolicyMenu : MonoBehaviour
{
    private const string ADS_PERSONALIZATION_CONSENT = "Ads";
    private string policyKey = "policy";
    private string personalisedAdsKey = "personalisedAds";

    private void UnityAnalyticsButtonClicked()
    {
        // Fetch the URL of the page that allows the user to toggle the Unity Analytics consent
        // "Unity Data Privacy Plug-in" is required: https://assetstore.unity.com/packages/add-ons/services/unity-data-privacy-plug-in-118922
#if !UNITY_5_3_OR_NEWER && !UNITY_5_2 // Initialize must be called on Unity 5.1 or earlier
	    UnityEngine.Analytics.DataPrivacy.Initialize();
#endif
        UnityEngine.Analytics.DataPrivacy.FetchPrivacyUrl( 
        	( url ) => SimpleGDPR.OpenURL( url ), // On WebGL, this opens the URL in a new tab
        	( error ) => Debug.LogError( "Couldn't fetch url: " + error ) );
    }

    private IEnumerator ShowGDPRConsentDialogAndWait()
    {
        yield return SimpleGDPR.WaitForDialog(new GDPRConsentDialog().
        AddSectionWithToggle(ADS_PERSONALIZATION_CONSENT, "Ads Personalization", "When enabled, you'll see ads that are more relevant to you. Otherwise, you will still receive ads, but they will no longer be tailored toward you.").
        AddSectionWithButton(UnityAnalyticsButtonClicked, "Unity Analytics", "The collected data allows us to optimize the gameplay and update the game with new enjoyable content. You can see your collected data or change your settings from the dashboard.", "Open Analytics Dashboard").
        AddPrivacyPolicies("https://policies.google.com/privacy", "https://unity3d.com/legal/privacy-policy", "https://www.privacypolicygenerator.org/live.php?token=GeEuzBU3x8BnNeWMoB5eKbD5xrOz2zwH"));

        // Check if user has granted the Ads Personalization permission
        if (SimpleGDPR.GetConsentState(ADS_PERSONALIZATION_CONSENT) == SimpleGDPR.ConsentState.Yes)
        {
            // You can show personalized ads to the user
            Debug.LogWarning("Can show personalised Ads");
            PlayerPrefs.SetInt(personalisedAdsKey, 1);
        }
        else
        {
            // Don't show personalized ads to the user
            Debug.LogWarning("Cannot show personalised Ads");
            PlayerPrefs.SetInt(personalisedAdsKey, 0);
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        if (PlayerPrefs.GetInt("FIRSTTIMEOPENING", 1) == 1)
        {
            var accepted = PlayerPrefs.GetInt(policyKey, 0) == 1;

            // Show a dialog that prompts the user to accept the Terms of Service and Privacy Policy
            SimpleGDPR.ShowDialog(new TermsOfServiceDialog().
                SetTermsOfServiceLink("https://www.termsofservicegenerator.net/live.php?token=oBIQSgaffKcvF7xA3o3ehxqf4uwDlvB8").
                SetPrivacyPolicyLink("https://unity.com/legal/privacy-policy"),
                OnMenuSimpleClose);
        }
    }

    public void OpenGDPRConsent()
    {
        if (PlayerPrefs.GetInt(policyKey, 0) == 1)
        {
            StartCoroutine(ShowGDPRConsentDialogAndWait());
        }
    }

    private void OnMenuSimpleClose()
    {
        PlayerPrefs.SetInt(policyKey, 1);

        if (PlayerPrefs.GetInt("FIRSTTIMEOPENING", 1) == 1)
        {
            OpenGDPRConsent();
        }
    }
}
