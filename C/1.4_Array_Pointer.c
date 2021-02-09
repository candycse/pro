#include <stdio.h>
int main()
{
    int b = 10;
    int *p;
    // p=b; Wrong
    p = &b; // Correct
    printf("b=%d\n", b);
    printf("*p=%d\n", *p);
    printf("&b=%p\n", &b);
    printf("p=%p\n", p);

    int a[] = {6, 2, 1, 5, 3};
    printf("%d", a); // This will print the base address of array
    return 1;
}