using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Spawner : MonoBehaviour
{
    public PlayerController playerControl;
    public GameObject enemyPrefab;
    public float minimumTimeBetweenSpawns = 0.7f;
    public float timeBetweenEnemySpawns = 4.0f;
    public float enemyTimeCounter;
    public float range = 10.0f;

    private void SpawnEnemy(Vector3 _positionToSpawn)
    {
        GameObject enemy = Instantiate(enemyPrefab, _positionToSpawn, Random.rotation) as GameObject;
    }

    private void Update()
    {
        enemyTimeCounter -= Time.deltaTime;

        if (playerControl.GameStarted)
        {
            if (enemyTimeCounter <= 0.0f)
            {
                enemyTimeCounter = timeBetweenEnemySpawns;

                bool PointFound = false;
                while (!PointFound)
                {
                    //Used document to get random point on navmesh https://docs.unity3d.com/ScriptReference/AI.NavMesh.SamplePosition.html
                    Vector3 randomPoint = enemyPrefab.GetComponent<NavMeshAgent>().transform.position + Random.insideUnitSphere * range;

                    NavMeshHit hit;
                    if (NavMesh.SamplePosition(randomPoint, out hit, 1.0f, NavMesh.AllAreas))
                    {
                        if(Vector3.Distance(playerControl.transform.position, hit.position) > 5f)
                        {
                            SpawnEnemy(hit.position);
                            PointFound = true;
                        }
                    }
                }
            }
        }
    }
}
