using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Spawner : MonoBehaviour
{

    public GameObject enemyPrefab;
    public float timeBetweenEnemySpawns = 1.0f;
    public float enemyTimeCounter;
    public float range = 10.0f;
    public NavMeshAgent agent;

    private void SpawnEnemy(Vector3 _positionToSpawn)
    {
        GameObject enemy = Instantiate(enemyPrefab, _positionToSpawn, Random.rotation) as GameObject;
    }

    private void Update()
    {
        enemyTimeCounter -= Time.deltaTime;

        if(enemyTimeCounter <= 0.0f)
        {
            enemyTimeCounter = timeBetweenEnemySpawns;
            Vector3 randomPoint = agent.transform.position + Random.insideUnitSphere * range;

            NavMeshHit hit;
            if (NavMesh.SamplePosition(randomPoint, out hit, 1.0f, NavMesh.AllAreas))
            {
                SpawnEnemy(hit.position);
            }
        }
    }
}
