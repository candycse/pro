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

void insertNode();
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
    insertNode();
    showLinkedList(count);

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
void insertNode()
{
    int choice, pos, i = 1;
    printf("\nEnter Your Choice (1 or 2 or 3)\n");
    printf("1 Insert at begining\n");
    printf("2 Insert at end\n");
    printf("3 Insert after nth position\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        newNode = (node *)malloc(sizeof(node));
        printf("Enter the data for first node: ");
        scanf("%d", &newNode->data);
        newNode->next = head;
        head = newNode;
        count++;
        break;
    case 2:
        newNode = (node *)malloc(sizeof(node));
        printf("Enter the data for last node: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        count++;
        break;
    case 3:
        printf("Enter the position: ");
        scanf("%d", &pos);
        if (pos > linkedListSize())
        {
            printf("Invalid position: ");
            exit(1);
        }
        else
        {
            newNode = (node *)malloc(sizeof(node));
            printf("Enter the data for node: ");
            scanf("%d", &newNode->data);

            temp = head;
            while (i < pos)
            {
                temp = temp->next;
                i++;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            count++;
        }
        break;
    }
}
int linkedListSize()
{
    int COUNT = 1;
    temp = head;
    while (temp->next != NULL)
    {
        COUNT++;
        temp = temp->next;
    }
    return COUNT;
}