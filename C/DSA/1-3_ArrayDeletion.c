//Delete from Array
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int arrayLen = 50;
    int a[arrayLen], size, i, pos;
    printf("Enter the size of array: \n");
    scanf("%d", &size);
    if (size > arrayLen)
    {
        printf("Overflow Condition, Size must be less than %d", arrayLen);
    }
    else
    {
        printf("Enter the elements of array: \n");
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("Elements are: \na[position]=value \n");
        for (i = 0; i < size; i++)
        {
            printf("a[%d]=%d \n", i + 1, a[i]);
        }
        printf("\nEnter the position number to delete: \n");
        scanf("%d", &pos);
        if (pos > size || pos <= 0)
        {
            printf("\n----Invalid Position-----\n\n");
            exit(0);
        }
        for (i = pos - 1; i < size - 1; i++)
        {
            a[i] = a[i + 1];
        }
        size--;
        printf("Deleted Successfully: \n");
        printf("Now we have: \na[position]=value \n");
        for (i = 0; i < size; i++)
        {
            printf("a[%d]=%d \n", i + 1, a[i]);
        }
    }
    return 1;
}