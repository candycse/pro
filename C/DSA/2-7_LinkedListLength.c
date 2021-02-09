#include "stdio.h"
#include "stdlib.h"
typedef struct node
{
    int data;
    struct node *next;
} node;
void createLinkedList(int);
void showLinkedList(int);
int linkedListSize();

node *head = NULL;
node *temp, *newNode, *prevNode;
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
    printf("\nSize of linkedlist is : %d \n", linkedListSize());
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
}

int linkedListSize()
{
    int COUNT = 0;
    temp = head;
    while (temp != NULL)
    {
        COUNT++;
        temp = temp->next;
    }
    return COUNT;
}