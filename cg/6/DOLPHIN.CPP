#include<iostream.h>
#include<dos.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
void animal(int x,int y){
line(x+58,y+29,x+130,y+29);
line(x+58,y+29,x+58,y+51);
line(x+58,y+73,x+58,y+85);
line(x+58,y+85,x+30,y+85);
line(x+30,y+85,x+30,y+105);
line(x+30,y+105,x+130,y+105);
line(x+130,y+29,x+175,y+105);
line(x+175,y+105,x+110,y+200);
line(x+110,y+200,x+110,y+162);
line(x+110,y+120,x+110,y+105);
line(x+110,y+120,x+92,y+105);
line(x+110,y+162,x+74,y+152);
line(x+74,y+152,x+130,y+145);
line(x+130,y+145,x+130,y+105);
line(x+30,y+100,x+84,y+100);
line(x+84,y+100,x+90,y+95);
line(x+120,y+5,x+120,y+29);
line(x+120,y+5,x+90,y+29);
circle(x+95,y+62,10);
circle(x+60,y+62,10);
}

int main()
{
int gd=DETECT,gm,temp,x,y,xc,r,yc;
initgraph(&gd,&gm,"..\\BGI");
int xm=getmaxx();
int ym=getmaxy();
setlinestyle(0,0,3);
//x=0;
//y=0;
r=70;
yc=250;


for(xc=xm-r-20;xc>0;xc=xc-(2*r)){
   for(x=xc+r;x>=xc-r;x=x-4){
   cleardevice();
   setbkcolor(9);
   setcolor(14);
   circle(40,40,20);
   setfillstyle(HATCH_FILL,14);
   floodfill(38,40,14);
   rectangle(10,10,xm-10,ym-10);
   y=yc+(sqrt(abs(r*r-((x-xc)*(x-xc)))));
   temp=y-yc;
   y=yc-temp;
   setcolor(6);
   animal(x-100,y-100);
   setfillstyle(SOLID_FILL,8);
   floodfill(x+70,y+5,6);
   setfillstyle(SOLID_FILL,0);
   floodfill(x-5,y-38,6);
   setcolor(15);
   line(0,250,xm,250);
   setfillstyle(INTERLEAVE_FILL,BLUE);
   floodfill(50,300,15);
   delay(200);

   }

}
getch();
closegraph();

return 0;
}