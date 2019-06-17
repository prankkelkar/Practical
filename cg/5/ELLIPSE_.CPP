#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#define a ((float) (a+0.5))

void drawell(float xc,float yc,float x,float y,float d);
void ell(float xc,float yc,float rx,float ry,float d)
{
float rxsq=rx*rx;
float rysq=ry*ry;
float tworxsq=2*rxsq;
float tworysq=2*rysq;
float p;
float x=0;
float y=ry;
float px=0;
float py=tworxsq*y;

/*draw first set of points*/
drawell(xc,yc,x,y,d);


/*region 1*/
p=(rysq-(rxsq*ry)+(0.25*rxsq));
while(px<py)
{
x++;
px+=tworysq;
if(p<0)
p+=rysq+px;
else
{
y--;
py-=tworxsq;
p+=rysq+px-py;
}
drawell(xc,yc,x,y,d);
}

/*region 2*/
p=(rysq*(x+0.5)*(x+0.5)+rxsq*(y-1)*(y-1)-rxsq*rysq);
while(y>0)
{
y--;
py-=tworxsq;
if(p>=0)
p+=rxsq-py;
else
{
x++;
px+=tworysq;
p+=rxsq-py+px;
}
drawell(xc,yc,x,y,d);
}
}
void drawell(float xc,float yc,float x,float y,float d)
{
putpixel(xc+x,yc+y,d);
putpixel(xc-x,yc+y,d);
putpixel(xc+x,yc-y,d);
putpixel(xc-x,yc-y,d);
}
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"..\\BGI");
ell(300,200,150,50,15);
ell(300,200,140,40,15);
ell(300,200,130,30,15);
ell(300,200,120,20,15);
ell(300,200,50,10,15);
//circle(300,200,10);
line(150,200,150,450);
line(450,200,450,450);
line(150,450,450,450);

setfillstyle(SOLID_FILL,9);
floodfill(301,200,15);

setfillstyle(SOLID_FILL,1);
floodfill(155,201,15);
setfillstyle(SOLID_FILL,1);
floodfill(165,201,15);
floodfill(175,201,15);
setfillstyle(SOLID_FILL,9);
floodfill(185,201,15);
setfillstyle(SOLID_FILL,6);
floodfill(299,440,15);
getch();
return 0;
}
