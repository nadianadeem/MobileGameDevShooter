using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DecreaseBulletSpeed : MonoBehaviour
{
    public BulletManager bulletController;
    public float orginalSpeed;

    IEnumerator IncreaseSpeed()
    {
        bulletController.BulletSpeed = orginalSpeed / 2;
        bulletController.TimeBetweenShots = 0.45f;

        yield return new WaitForSeconds(5);

        bulletController.BulletSpeed = orginalSpeed;
        bulletController.TimeBetweenShots = 0.3f;
        Destroy(gameObject);
    }

    private void Start()
    {
        bulletController = GameObject.FindGameObjectWithTag("Player").GetComponent<BulletManager>();
        orginalSpeed = bulletController.BulletSpeed;
    }

    public void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            StartCoroutine(IncreaseSpeed());
            gameObject.GetComponent<Renderer>().enabled = false;
        }
    }
}
