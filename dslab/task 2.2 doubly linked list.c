#include <stdio.h>
#include <stdlib.h>
 
// A Doubly Linked List Node
struct Node
{
    int data;
    struct Node *next, *prev;
};
 
// Utility function to push a node at the beginning of the doubly linked list
void push(struct Node** headRef, int key)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = key;
    node->prev = NULL;
    node->next = *headRef;
 
    // change `prev` of the existing head node to point to the new node
    if (*headRef != NULL) {
        (*headRef)->prev = node;
    }
 
    // update head pointer
    *headRef = node;
}
 
// Helper function to print nodes of a doubly linked list
void printDDL(char* msg, struct Node* head)
{
    printf("%s: ", msg);
    while (head != NULL)
    {
        printf("%d —> ", head->data);
        head = head->next;
    }
 
    printf("null\n");
}
 
// Function to swap `next` and `prev` pointers of the given node
void swap(struct Node* node)
{
    struct Node* prev = node->prev;
    node->prev = node->next;
    node->next = prev;
}
 
// Function to reverse a doubly-linked list
void reverseDDL(struct Node** headRef)
{
    struct Node* prev = NULL;
    struct Node* curr = *headRef;
 
    // traverse the list
    while (curr != NULL)
    {
        // swap `next` and `prev` pointers for the current node
        swap(curr);
 
        // update the previous node before moving to the next node
        prev = curr;
 
        // move to the next node in the doubly linked list
        // (advance using `prev` pointer since `next` and `prev` pointers were swapped)
        curr = curr->prev;
    }
 
    // update head pointer to the last node
    if (prev != NULL) {
        *headRef = prev;
    }
}
 
int main(void)
{
    int keys[1000],C,i,n ;
    printf("ENTER SIZE:");
    scanf("%d",&C);
    printf("ENTER THE ELEMENTS:");
    for(i=0;i<C;i++)
    {
    scanf("%d",&keys);
    int n = sizeof(keys)/sizeof(keys[i]);
    }
 
    struct Node* head = NULL;
    for (int i = 0; i < n; i++) {
        push(&head, keys[i]);
    }
 
    printDDL("Reveresd  list", head);
    reverseDDL(&head);
    printDDL("Original list", head);
 
    return 0;
}



