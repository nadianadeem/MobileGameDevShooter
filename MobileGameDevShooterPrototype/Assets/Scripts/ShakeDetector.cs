using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShakeDetector : MonoBehaviour
{
    public ButtonManager buttonManager;
    public float ShakeDetectionThreshold;

    private float sqrShakeDetectionThreshold;

    // Start is called before the first frame update
    void Start()
    {
        sqrShakeDetectionThreshold = Mathf.Pow(ShakeDetectionThreshold, 2);

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.acceleration.sqrMagnitude >= sqrShakeDetectionThreshold)
        {
            if (!buttonManager.PlayerControl.GameStarted && buttonManager.MainMenu.activeSelf)
            {
                buttonManager.StartGame();
            }
        }
    }
}
