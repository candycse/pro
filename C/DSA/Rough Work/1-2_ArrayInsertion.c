#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50], size, i, num, pos, temp;
    printf("Enter size of Array: ");
    scanf("%d", &size);
    if (size > 50)
        printf("Array size should be less than 50 ");
    else
    {
        printf("Enter the elements for array\n");
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]); 
        }

        printf("Elements in array with [Pos]=number \n");
        for (i = 0; i < size; i++)
        {
            printf("[%d]=%d\n", i + 1, a[i]);
        }

        printf("\n\nEnter number and position to Insert in Array\n");
        scanf("%d%d", &num, &pos);
        if (pos < 1 || pos > size + 1)
        {
            printf("Invalid Position");
            exit(0);
        }

        for (i = size - 1; i >= pos - 1; i--)
        {
            a[i + 1] = a[i];
        }
        a[pos - 1] = num;
        size++;

        printf("Now Elements in array with [Pos]=number \n");
        for (i = 0; i < size; i++)
        {
            printf("[%d]=%d\n", i + 1, a[i]);
        }
    }

    return 0;
}
