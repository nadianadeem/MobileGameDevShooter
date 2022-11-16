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

    void OnTriggerEnter(Collider collision)
    {
        if( collision.gameObject.tag == "Enemy")
        {
            if (!collision.gameObject.GetComponent<EnemyAI>().isDead)
            {
                collision.gameObject.GetComponent<EnemyAI>().isDead = true;
                int randomInt = Random.Range(1, 4);

                switch (randomInt)
                {
                    case 1:
                        GameObject.FindGameObjectWithTag("Sound").GetComponent<SceneSoundManager>().PlaySoundUnManaged(1);
                        break;
                    case 2:
                        GameObject.FindGameObjectWithTag("Sound").GetComponent<SceneSoundManager>().PlaySoundUnManaged(5);
                        break;
                    case 3:
                        GameObject.FindGameObjectWithTag("Sound").GetComponent<SceneSoundManager>().PlaySoundUnManaged(6);
                        break;
                }

                GameObject.FindGameObjectWithTag("Timer").GetComponent<Timer>().enemiesKilled += 1;
            }
        }
    }

    IEnumerator DestroyBullet()
    {
        yield return new WaitForSeconds(2.0f);
        Destroy(gameObject);
    }
}
