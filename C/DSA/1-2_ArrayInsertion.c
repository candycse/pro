//Traversal and Insertion of Array
//Traversal means visiting  every element of an array exactly once
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[50], i, size, pos, num;
    printf("Enter size of array: ");
    scanf("%d", &size);
    if (size > 50)
    {
        printf("Overflow condition :(");
        exit(1);
    }
    printf("Enter the elements of array: \n");
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);
    printf("Elements in array:\n");
    for (i = 0; i < size; i++)
        printf("a[%d]=%d \n", i + 1, a[i]);
    //Insertion
    printf("Enter a Number to Insert: ");
    scanf("%d", &num);
    printf("Enter On Which Position: ");
    scanf("%d", &pos);
    if (pos > size + 1 || pos < 1)
    {
        printf("!!!--Invalid--Position--!!!");
        exit(1);
    }
    for (i = size - 1; i >= pos - 1; i--)
        a[i + 1] = a[i];
    a[pos - 1] = num;
    size++;
    printf("\n---Elements in array---\n");
    for (i = 0; i < size; i++)
        printf("a[%d]=%d \n", i + 1, a[i]);

    return 1;
}