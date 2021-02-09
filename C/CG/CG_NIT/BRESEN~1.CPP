#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
//Bresenham's Line Drawing ALogrithm
void main(){
 int x,y,x1,y1,x2,y2,dx,dy,p;
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\bgi");
 printf("Enter Starting coordinte of line: x1 and y1 ");
 scanf("%d%d",&x1,&y1);
 printf("Enter Ending Coordinate of line: x2 and y2 ");
 scanf("%d%d",&x2,&y2);
 dx=x2-x1;
 dy=y2-y1;
x=x1;
y=y1;
 p=2*dy-dx;
 while(x<=dx){
  putpixel(x,y,10);
  x++;
  if(p<0){
   p=p+2*dy;
  }
  else{
   p=p+2*dy-2*dx;
   y++;
  }
  delay(10);
 }

getch();
closegraph();

}