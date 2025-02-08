#include <stdio.h>
#include <stdlib.h>

struct Node                                 // define a structure for LinkedList Node
{
    int data;
    struct Node* next;
};

void printlist(struct Node* head)         // Function to print Linked List 
{
    while (head)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main()
{
    // Allocate memory for first and second nodes
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* next = (struct Node*)malloc(sizeof(struct Node)); 

    // Assign data and link nodes correctly
    head->data = 10;
    head->next = next; // Link head to the second node
    next->data = 20;
    next->next = NULL; // Mark end of the list

    // Print list
    printlist(head);

    // Free allocated memory
    free(head);
    free(next);

    return 0;
}
