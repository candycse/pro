#include <stdio.h>
int main()
{
    int i, j, n = 5;

    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= 1; j--)
        {
            if (j <= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 1;
}