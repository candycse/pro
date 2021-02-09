//Linked list Implementation
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *temp, *newNode;
    head = NULL;
    int choice = 1;
    while (choice)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data for node: ");
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
        printf("Do you want to continue (0,1) ?: ");
        scanf("%d", &choice);
    }
    temp = head;
    while (temp != NULL)
    {
        printf("%d-> ", temp->data);
        temp = temp->next;
    }
    return 1;
}