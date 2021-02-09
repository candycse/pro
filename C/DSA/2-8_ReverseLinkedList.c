#include "stdio.h"
#include "stdlib.h"
typedef struct node
{
    int data;
    struct node *next;
} node;
void createLinkedList(int);
void showLinkedList(int);
void showREVLinkedList();
void revLinkedList();

node *head = NULL;
node *temp, *newNode;
int count = 0;
int main()
{
    int n, i;
    printf("Enter the number of nodes wants to create: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        createLinkedList(i);
        count++;
    }
    showLinkedList(count);
    revLinkedList();
    showREVLinkedList();
    return 1;
}
void createLinkedList(int i)
{
    newNode = (node *)malloc(sizeof(node));
    printf("Enter data for node %d: ", i);
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    if (head == NULL)
    {
        head = temp = newNode;
    }
    else
    {
        temp->next = newNode;
        temp = newNode;
    }
}

void showLinkedList(int count)
{
    printf("You have total %d node(s)\n", count);
    temp = head;
    while (temp != NULL)
    {
        printf("%d --> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

void showREVLinkedList()
{
    printf("\nReversed Linked List: \n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d <-- ", temp->data);
        temp = temp->next;
    }
    printf("Head");
}
void revLinkedList()
{
    node *prevNode, *currentNode, *nextNode;
    prevNode = NULL;
    currentNode = nextNode = head;
    while (nextNode != NULL)
    {
        nextNode = nextNode->next;
        currentNode->next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
    }
    head = prevNode;
}
