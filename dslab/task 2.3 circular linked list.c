#include <stdio.h>
#include <stdlib.h>

// Represent a node of the doubly linked list

struct Node
{
    int data;
    struct Node *previous;
    struct Node *next;
};

struct Node *present = NULL;
struct Node *head = NULL;
struct Node *tail = NULL;
struct Node *newPointer = NULL;
int length = 0;

void createNodes(int n)
{
    newPointer = (struct Node *)malloc(sizeof(struct Node));
    newPointer->data = n;
    newPointer->next = NULL;
    newPointer->previous = NULL;
    if (length == 0)
    {

        // CREATING FIRST ELEMENT FOR DOUBLY LINKED LIST

        head = newPointer;
        tail = newPointer;
        newPointer->next = newPointer;
        newPointer->previous = newPointer;
        length++;
    }
    // ADDING ELEMENT TO YOUR LINKED LIST
    else
    {
        tail->next = newPointer;
        newPointer->previous = tail;
        tail = newPointer;
        newPointer->next = head;
        tail = newPointer;
        head->previous = tail;

        length++;
        ;
    }
}

/* Function to print nodes in a given doubly linked list
   This function is same as printList() of singly linked lsit */
void printList(struct Node *node)
{
    struct Node *tp;
    tp = node;
    while(1)
    {
        printf("%d ", node->data);
        if(node->next == tp)
        {
            printf("\nThe end of the circle is %d",node->data);
            break;
        }
        node = node-> next;
    }
}

/* Drier program to test above functions*/
int main()
{
  /* Start with the empty list */
    int i,n,E;
    /* Start with the empty list */
    printf("Length of the circle:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("element - %d :",i);
        scanf("%d",&E);
        createNodes(E);
    }
    printf("Elements of the circle: ");
    printList(head);

    return 0;
}
