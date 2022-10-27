#include "list_queue.h"


void init_queue(queue *q)
{
q->front = NULL;
q->size = 0;
q->rear = NULL;
}

int empty(queue *q)
{
if (q->size = NULL){
  return 1; //return true if size is NULL/empty
}
else{
  return 0; //return false if size
}
}

void enqueue(queue *q, int x)
{
  // Add your enqueue function
}

int dequeue(queue *q)
{
  // Add your dequeue function
}
