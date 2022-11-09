#include "list_queue.h"

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

  if (q->rear == 0)
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

int dequeue(queue *q)// Add your dequeue function
{
  
}
