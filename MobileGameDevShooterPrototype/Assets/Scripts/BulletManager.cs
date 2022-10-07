using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletManager : MonoBehaviour
{
    //public LayerMask hitMask;
    public Transform bulletSpawn;

    public float damage = 10f;
    public float range = 100f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Shoot()
    {
        RaycastHit info;
        if(Physics.Raycast(bulletSpawn.transform.position, bulletSpawn.transform.forward, out info, range))
        {
            Debug.Log("Hit");
        }
    }
}
