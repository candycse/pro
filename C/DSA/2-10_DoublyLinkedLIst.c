#include "stdio.h"
#include "stdlib.h"

typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
} node;
void createDLL(int);
void showDLL();
void insertDLL();
void deleteDLL();
int linkedListSize();

node *head, *tail;

int main()
{
    int n, i;
    printf("Enter the number of nodes want to create: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        createDLL(i);
    }
    showDLL();
    insertDLL();
    showDLL();
    deleteDLL();
    showDLL();

    return 1;
}

void createDLL(int i)
{
    node *newNode;
    newNode = (node *)malloc(sizeof(node));
    printf("Enter the data for node %d: ", i);
    scanf("%d", &newNode->data);
    newNode->prev = NULL;
    newNode->next = NULL;
    if (head == NULL)
        head = tail = newNode;
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
void showDLL()
{
    node *temp;
    temp = head;
    printf("You have these data:\n");
    while (temp != NULL)
    {
        printf("%d --> ", temp->data);
        temp = temp->next;
    }
}

void insertDLL()
{
    int choice, pos, i;
    node *newNode, *temp;
    printf("\nEnter 1,2,3 for insertion: \n");
    printf("1=Begining,2=End,3=nth,4=NoAction: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        newNode = (node *)malloc(sizeof(node));
        printf("\nEnter the data to insert at begining: ");
        scanf("%d", &newNode->data);
        head->prev = newNode;
        newNode->next = head;
        newNode->prev = NULL;
        head = newNode;
        break;
    case 2:
        newNode = (node *)malloc(sizeof(node));
        printf("\nEnter the data to insert at end: ");
        scanf("%d", &newNode->data);
        newNode->prev = tail;
        tail->next = newNode;
        newNode->next = NULL;
        break;
    case 3:
        printf("Enter the position to insert data: ");
        scanf("%d", &pos);
        if (pos >= linkedListSize() || pos <= 1)
            printf("::Invalid Position: Must be in between:\n");
        else
        {
            newNode = (node *)malloc(sizeof(node));
            printf("Enter the data for node: ");
            scanf("%d", &newNode->data);
            temp = head;
            while (i < pos - 1)
            {
                temp = temp->next;
                i++;
            }
            newNode->prev = temp;
            newNode->next = temp->next;
            temp->next = newNode;
            temp->next->prev = newNode;
        }

        break;
    case 4:
        break;
    default:
        printf("::Invalid Choice:: \n");
        break;
    }
}

void deleteDLL()
{
    int choice, pos, i = 1;
    node *temp;
    printf("\nEnter 1,2,3 for DELETION: \n");
    printf("1=Begining,2=End,3=nth,4=NoAction: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
        printf("First Data is deleted successfully: \n");
        break;
    case 2:
        if (tail == NULL)
            printf("List is empty");
        else
        {
            temp = tail;
            tail->prev->next = NULL;
            tail = tail->prev;
            free(temp);
            printf("Last Data is deleted successfully: \n");
        }
        break;
    case 3:
        printf("Enter the position to delete data: ");
        scanf("%d", &pos);
        if (pos >= linkedListSize() || pos <= 1)
            printf("::Invalid Position: Must be in between:\n");
        else
        {
            temp = head;
            while (i < pos) //i initialize with 1
            {
                temp = temp->next;
                i++;
            }
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            free(temp);
            printf("Deleted successfully: \n");
        }

        break;
    default:
        printf("::Invalid Choice:: \n");
        break;
    }
}

int linkedListSize()
{
    node *temp;
    int COUNT = 0;
    temp = head;
    while (temp != NULL)
    {
        COUNT++;
        temp = temp->next;
    }
    return COUNT;
}