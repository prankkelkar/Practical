#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void MIDPT(float xc,float yc,float r,int c);
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"..\\BGI");
outtext("NO ENTRY");
MIDPT(200,140,100,4);
MIDPT(200,140,90,4);
setfillstyle(1,1);
floodfill(200,45,4);

setfillstyle(1,4);
floodfill(180,137,4);
setcolor(1);

	      line(128,70,268,208);
	      line(132,68,272,206);
	     line(128,70,132,68);
	     line(272,206,268,208);
setfillstyle(1,1);
floodfill(200,140,1);
setcolor(15);
//MIDPT(180,120,20,0);
//MIDPT(180,120,15,0);
setfillstyle(1,0);
//floodfill(180,137,0);
//MIDPT(180,155,20,0);
//MIDPT(180,155,15,0);
setfillstyle(1,0);
//floodfill(180,173,0);
//MIDPT(233,140,30,0);
//MIDPT(233,140,25,0);
setfillstyle(1,0);
//floodfill(233,168,0);
setfillstyle(1,10);
line(195,241,195,470);
line(205,241,205,470);
line(205,470,195,470);
line(195,241,205,241);
setfillstyle(1,15);
floodfill(200,298,15);
getch();
return 0;
}
void MIDPT(float xc,float yc,float r,int c)
{
float p0,x0=0,y0=r;
int x;
x=r;
x=r-x;
if(x==0)
	p0=1-r;
else
	p0=(5/4)-r;
putpixel(x0+xc,y0+yc,c);
while(x0<=y0)
{
	putpixel(x0+xc,y0+yc,c);
	putpixel(-x0+xc,y0+yc,c);
	putpixel(-x0+xc,-y0+yc,c);
	putpixel(x0+xc,-y0+yc,c);
	putpixel(y0+xc,x0+yc,c);
	putpixel(-y0+xc,x0+yc,c);
	putpixel(-y0+xc,-x0+yc,c);
	putpixel(y0+xc,-x0+yc,c);
	if(p0<0)
	{		p0+=2*x0+2+1;
		x0++;
	}
	else
	{
		p0+=2*x0-2*y0+1;
		y0=y0-1;
		x0++;
	}
}
}