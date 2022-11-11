using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

//Tutorial used: https://www.youtube.com/watch?v=UjkSFoLxesw&list=PLmBt5RqGsDudapyrfZjO3w1vRmQlAimP2&index=8&t=17s

public class EnemyAI : MonoBehaviour
{
    public NavMeshAgent agent;
    public Animator enemyAnimator;

    public Transform player;
    public PlayerController playerController;

    public LayerMask whatIsGround, whatIsPlayer;

    //Patrolling
    public Vector3 walkPoint;
    bool walkPointSet;
    public float walkPointRange;

    //Attacking
    public float timeBetweenAttacks;
    bool alreadyAttacked;
    public bool isDead = false;

    //States
    public float sightRange, attackRange;
    public bool playerInSightRange, playerInAttackRange;

    // Update is called once per frame
    private void Update()
    {
        playerInSightRange = Physics.CheckSphere(transform.position, sightRange, whatIsPlayer);
        playerInAttackRange = Physics.CheckSphere(transform.position, attackRange, whatIsPlayer);

        if (!isDead)
        {
            if (!playerInAttackRange) ChasePlayer();
            if (playerInAttackRange) AttackPlayer();
        }
        else
        {
            agent.SetDestination(transform.position);
            enemyAnimator.SetTrigger("Die");
            if (enemyAnimator.GetCurrentAnimatorStateInfo(0).IsName("Death") && enemyAnimator.GetCurrentAnimatorStateInfo(0).normalizedTime >= 1.0f)
            {
                Destroy(gameObject);
            }
        }
    }

    private void Awake()
    {
        player = GameObject.Find("PlayerObj").transform;
        playerController = GameObject.Find("PlayerObj").GetComponent<PlayerController>();
        agent = GetComponent<NavMeshAgent>();
    }

    private void Patrolling()
    {
        if (!walkPointSet) SearchWalkPoint();

        if (walkPointSet)
        {
            agent.SetDestination(walkPoint);
        }

        Vector3 distanceToWalkPoint = transform.position - walkPoint;

        if(distanceToWalkPoint.magnitude < 0.5f)
        {
            walkPointSet = false;
        }
    }

    private void SearchWalkPoint()
    {
        float randomZ = Random.Range(-walkPointRange, walkPointRange);
        float randomX = Random.Range(-walkPointRange, walkPointRange);

        walkPoint = new Vector3(transform.position.x + randomX, transform.position.y, transform.position.z + randomZ);

        if (Physics.Raycast(walkPoint, -transform.up, 2f, whatIsGround))
        {
            walkPointSet = true;
        }
    }

    private void ChasePlayer()
    {
        agent.SetDestination(player.position);
        agent.transform.LookAt(player.position);
        enemyAnimator.SetBool("IsRunning", true);
    }

    private void AttackPlayer()
    {
        enemyAnimator.SetBool("IsRunning", false);
        agent.SetDestination(transform.position);
        transform.LookAt(player);

        if (!alreadyAttacked)
        {
            int randomInt = Random.Range(1, 5);
            switch (randomInt)
            {
                case 1:
                    enemyAnimator.SetTrigger("ElbowPunch");
                    break;
                case 2:
                    enemyAnimator.SetTrigger("Uppercut");
                    break;
                case 3:
                    enemyAnimator.SetTrigger("Punching");
                    break;
                case 4:
                    enemyAnimator.SetTrigger("CrossPunch");
                    break;
            }
            //Attack code here.
            playerController.health -= 100;

            alreadyAttacked = true;
            Invoke(nameof(ResetAttack), timeBetweenAttacks);
        }
    }

    private void ResetAttack()
    {
        alreadyAttacked = false;
    }
}
