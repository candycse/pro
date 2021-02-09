int main(){
 int a,b,c;
 printf("Enter two numbers \n");
 scanf("%d%d",&a,&b);
 c=a;
 a=b;
 b=c;
 printf("Swapped numbers are: %d %d",a,b);

 return 1;
}
