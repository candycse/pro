#include <stdio.h>
int main()
{
    int i, j, n=4;

    for (i = n; i >= 1; i--)
    {
        for (j = n; j >=i; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 1;
}