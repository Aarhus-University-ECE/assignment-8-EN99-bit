

extern "C"{
#include "insertion_sort.h"
#include "linked_list.h"
}

// File for sandboxing and trying out code
int main(int argc, char **argv)
{
    int testerList[7] = {-3,22,11,33,3,5,1};
    linked_list* test = createLinkedList();
    for (int i = 0; i<7; i++)
    {
        insertFront(createNode(testerList[7-i-1]),test);
    }

printLL(test);
sort(test);
printLL(test);
return 0;
}