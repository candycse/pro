#include<stdio.h>
#include<graphic.h>

int main(){
    int gd = DETECT,gm;
    circle(200,200,100);
    initgraph(&gd,&gm," ");
    getch();
    closegraph();
    return 0;
      printf("Hellow");
}
