#include "stdio.h";
int main(){
    struct emp{
        float sal;
        char name[30];
    }e[50];

    int i, sec_max, n, j;
    printf("Enter no. of employees min 2 max 50: ");
    scanf("%d", &n);
    for (i = 0; i < n;i++){
        printf("\n e[%d].name =",i);
        scanf("%s", e[i].name);
        scanf("%n e[%d].sal=", i);
        scanf("%d", &e[i].sal);
    }   
    for (i = 1; i < n;i++){
        printf("\n Enter name of %d emp", i + 1);
        scanf("%s", e[i].name);
        printf("\n Enter sal of %d emp", i + 1);
        scanf("%s", e[i].sal);
    }
    max

        return 1;
}