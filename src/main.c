

#include "insertion_sort.h"
#include "linked_list.h"
#include "list_queue.h"
#include <assert.h>

// File for sandboxing and trying out code

int main(int argc, char **argv)
{
    queue q1;
    init_queue(&q1);
    enqueue(&q1, 5);
    assert(empty(&q1) == 0);
    dequeue(&q1);
    assert(empty(&q1) == 1);

    // Test enqueue then dequeue
    enqueue(&q1, -5);
    enqueue(&q1, 10);
    enqueue(&q1, 0);
    enqueue(&q1, 5);

    printf("Hello\n");
    assert(-8 == dequeue(&q1));
    assert(10 == dequeue(&q1));
    printf("Hello2n");
    // REQUIRE(0 == dequeue(&q1));
    // REQUIRE(5 == dequeue(&q1));

    /*int testerList[7] = {-3,22,11,33,3,5,1};
    linked_list* test = createLinkedList();
    for (int i = 0; i<7; i++)
    {
        insertFront(createNode(testerList[7-i-1]),test);
    }

printLL(test);
sort(test);
printLL(test);*/
    return 0;
}