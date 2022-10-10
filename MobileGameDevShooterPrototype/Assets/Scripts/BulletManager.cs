using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletManager : MonoBehaviour
{
    //public LayerMask hitMask;
    public Transform BulletSpawn;

    public bool IsFiring;

    public BulletController bullet;

    public float TimeBetweenShots;
    public float BulletSpeed;
    public float Damage = 10f;
    public float Range = 100f;
    private float ShotCounter;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (IsFiring)
        {
            ShotCounter -= Time.deltaTime;
            if(ShotCounter <= 0)
            {
                ShotCounter = TimeBetweenShots;
                BulletController NewBullet = Instantiate(bullet, BulletSpawn.position, BulletSpawn.rotation) as BulletController;
                NewBullet.Speed = BulletSpeed;
            }
        }
        else
        {
            ShotCounter = 0;
        }
    }

    public void Shoot()
    {
        RaycastHit info;
        if(Physics.Raycast(BulletSpawn.transform.position, BulletSpawn.transform.forward, out info, Range))
        {
            Debug.Log("Hit");
        }
    }
}
