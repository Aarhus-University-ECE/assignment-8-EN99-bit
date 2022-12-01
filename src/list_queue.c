#include "list_queue.h"
#include <assert.h>

void init_queue(queue *q) // if front and rear points are both NULL, it means
{
  q->size = 0;
  q->front = NULL;
  q->rear = NULL;
}

int empty(queue *q)
{
  if (q->size == 0)
  {
    return 1; // return true if size is NULL/empty
  }
  else
  {
    return 0; // return false if size
  }
}

void enqueue(queue *q, int x) // Function to add an element to the queue
{
  // Add your enqueue function
  qnode *element = malloc(sizeof(qnode)); // Adding a node to the end of the queue

  element->data = x;    // with x as data and NULL as last in next*
  element->next = NULL; // last element in queue always points at NULL

  if (q->rear == NULL)
  {
    q->rear = element;
    q->front = element;
    q->rear->next = NULL;
  }
  else
  {
    q->rear->next = element;
    q->rear = element;
  }

  // 1: Build new node with data
  // 2: Check if the queue is empty
  // 3: If queue is empty then create node at front and rear
  // 4: Else make next of rear as new node and rear
  // 5: Add one to size of queue
  q->size++;
}

int dequeue(queue *q) // Add your dequeue function
{
  // assert(q->size > 0); // assert that queue is not empty

  if (q->size <= 0)
  {
    q->front = NULL;
    q->rear = NULL;
    return -1; // function must return something - error code return
  }
  else if (q->size > 0)
  {
    int data = q->front->data;
    qnode *tmp = q->front;     // store old_front in node because we have to free it later
    q->front = q->front->next; // if queue is not empty then remove top of queue and take one from size
    q->size = q->size - 1;

    free(tmp);

    return data;
  }
}
