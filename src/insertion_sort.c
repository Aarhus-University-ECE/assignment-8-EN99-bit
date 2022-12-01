#include "insertion_sort.h"
#include "linked_list.h"
#include <assert.h>

// Add your sort function here

void sort(linked_list *ll_ptr)
{
    node_t *prev_node = ll_ptr->head; // doubly linked lists contains 2 pointers
    node_t *curr_node = ll_ptr->head->next;
    node_t *track_node;

    while (curr_node != NULL) // loop through the list, while sorting
    {
        if (curr_node->data < prev_node->data) //
        {
            if (curr_node->data < ll_ptr->head->data) //edge case if curr_node->next is less than head
            {
                prev_node->next = curr_node->next;
                curr_node->next = ll_ptr->head;
                ll_ptr->head = curr_node;
            }
            else
            {
                track_node = ll_ptr->head;
                while (track_node->next->data < curr_node->data)
                {
                    track_node = track_node->next;
                }
                prev_node->next = curr_node->next; // Perform insertion
                curr_node->next = track_node->next;
                track_node->next = curr_node;
            }
            curr_node = prev_node->next; //Update current so i can continue sorting
        }
        else
        {
            prev_node = curr_node;
            curr_node = prev_node->next;
        }
    }
}

// function to loop from the beginning of the array until curr
//  NULL is returned if ll_ptr is an empty list, or no element in ll_ptr points to p
/*node_t *find_previous(linked_list *ll_ptr, node_t *p)
{ // p = pointer we would like the previous node to the current node
    assert(ll_ptr != NULL && p != NULL);

    if (ll_ptr->head == NULL)
    {
        return NULL;
    }

    node_t *tmp = ll_ptr->head;

    while (tmp != NULL)
    {
        if (tmp->next == p)
        {
            return tmp;
        }

        tmp = tmp->next;
    }

    return NULL;
}

void sort(linked_list *ll_ptr) // Sort function to sort unsorted arrays
{

    node_t *temp = ll_ptr->head;

    while (temp != NULL)
    {
        printLL(ll_ptr);

        int curr = temp->data; // Temp is used for iterating the list
        printf("curr = %d\n", curr);
        node_t *pnext = temp->next; // Points to next in node

        // printf("ahh %d\n", pnext->);

        int nextdata = pnext->data;

        if (pnext == NULL)
        {
            return;
        }

        // e.g. 33 > 11
        if (curr > nextdata)
        {
            node_t *prev_node_temp = temp; // variable to store our temp in the previous node
            // loop while previous nodes are greater than nextdata
            while (1) // inner loop to swap around. When going back the loop we must know when to stop and insert
            {
                node_t *prev_node = find_previous(ll_ptr, prev_node_temp); // find previous node to compare
                // prev_node->next == temp
                if (prev_node == NULL) // Special case for first element. Sorting also including first element and head
                {
                    temp->next = pnext->next;   // 1 step
                    pnext->next = ll_ptr->head; // 2 step
                    ll_ptr->head = pnext;       // 3 step
                    break;
                }

                if (prev_node->data <= nextdata)
                {
                    temp->next = pnext->next;      // 1 step
                    pnext->next = prev_node->next; // 2 step
                    prev_node->next = pnext;       // 3 step
                    break;
                }

                prev_node_temp = prev_node;
            }
        }

        temp = temp->next;
    }

    // node_t *temp = (node*) malloc(sizeof(node));
}*/
