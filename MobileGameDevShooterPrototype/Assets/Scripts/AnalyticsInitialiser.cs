using UnityEngine;
using Unity.Services.Core;
using Unity.Services.Analytics;
using System.Collections.Generic;
using Unity.Services.Core.Environments;

public class AnalyticsInitialiser : MonoBehaviour
{
    // Store whether opt in consent is required, and what consent ID to use
    string consentIdentifier;
    bool consentHasBeenChecked;

    // Start is called before the first frame update
    async void Start()
    {
        try
        {
            var options = new InitializationOptions();
            options.SetEnvironmentName("production");
            await UnityServices.InitializeAsync(options);
            List<string> consentIdentifiers = await AnalyticsService.Instance.CheckForRequiredConsents();
            
        }
        catch (ConsentCheckException e)
        {
            // Something went wrong when checking the GeoIP, check the e.Reason and handle appropriately
        }
    }
}
