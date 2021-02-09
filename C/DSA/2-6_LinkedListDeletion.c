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
void deleteNode();

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
    deleteNode();
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
void deleteNode()
{
    int choice, pos, i = 1;
    printf("\nEnter Your Choice (1 or 2 or 3)\n");
    printf("1 Delete at begining\n");
    printf("2 Delete at end\n");
    printf("3 Delete at nth position\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        if (head == NULL)
        {
            printf("List is empty: ");
        }
        else
        {
            temp = head;
            head = head->next;
            free(temp);
            printf("First Node is Deleted Successfully:\n");
            count--;
        }
        break;
    case 2:
        temp = head;
        while (temp->next != NULL)
        {
            prevNode = temp;
            temp = temp->next;
        }
        if (temp == head)
            head = NULL;
        else
            prevNode->next = NULL;
        free(temp);
        printf("Last node is Deleted Successfully: \n");
        count--;
        break;
    case 3:
        printf("Enter the position: ");
        scanf("%d", &pos);
        if (pos > linkedListSize() || pos <= 1)
        {
            printf("Invalid position: ");
            exit(1);
        }
        else
        { //i is one initially
            temp = head;
            while (i < pos)
            {
                prevNode = temp;
                temp = temp->next;
                i++;
            }
            prevNode->next = temp->next;
            free(temp);
            printf("Node Deleted Successfully: \n");
            count--;
        }
        break;
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