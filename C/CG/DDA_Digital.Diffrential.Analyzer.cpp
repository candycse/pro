//DDA (Digital Differential Analyzer)
//Line Drawing Algorithm
#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
int main(){
int gd=DETECT,gm;
int x1,y1,x2,y2;
int dx=x2-x1;
int dy=y2-y1;
float steps,xinc,yinc;

initgraph(&gd,&gm," ");
cout<<"Enter values for x1 and y1"<<endl;
cin>>x1>>y1;
cout<<"enter values for x2 and y2 "<<endl;
cin>>x2>>y2;



if(abs(dx)>abs(dy))
    steps=dx;
else
    steps=dy;
xinc=dx/steps;
yinc=dy/steps;

for(int i=1;i<=steps;i++){
    putpixel(x1,y1);
    x1=x1+xinc;
    y1=y1+yinc;
}


return 1;
}


