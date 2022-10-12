using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletController : MonoBehaviour
{
    public float Speed;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(DestroyBullet());
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(Vector3.forward * Speed * Time.deltaTime);
    }

    void OnCollisionEnter(Collision collision)
    {
        if( collision.gameObject.tag == "Enemy")
        {
            Destroy(collision.gameObject);
            GameObject.FindGameObjectWithTag("Timer").GetComponent<Timer>().enemiesKilled += 1;
        }
    }

    IEnumerator DestroyBullet()
    {
        yield return new WaitForSeconds(2.0f);
        Destroy(gameObject);
    }
}
