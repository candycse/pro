#include<stdio.h>
int main(){
int a[50],i,size,delItem,delPos;
printf("Enter size of array: \n");
scanf("%d",&size);
if(size > 50){
    printf("Overflow condition: must be less than 50 ");
    }else{
        printf("Enter the elements of Array: \n");
        for(i=0;i<size;i++){
            scanf("%d",&a[i]);
        }
     printf("\nElements of the array are: [pos]=elements \n");
       for(i=0;i<size;i++){
        printf("[%d]=%d\n",i+1,a[i]);
       }

       printf("Enter the Position to delete the elements: ");
       scanf("%d",&delPos);
       if(delPos<1 || delPos>size){
        printf("Entered Position is not in range:");
       }else{
           delItem=a[delPos-1];
       for(i=delPos-1;i<size-1;i++){
        a[i]=a[i+1];
       }
       size--;
        printf("\nYou have deleted %d which was at %d \n",delItem,delPos);
        printf("\nElements of the array are: [pos]=elements \n");
       for(i=0;i<size;i++){
        printf("[%d]=%d\n",i+1,a[i]);
       }

       }
    }
}
