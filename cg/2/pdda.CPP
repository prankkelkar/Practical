#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void dda( float x0, float y0, float x1, float y1)
{ float m,dx,dy,i;
//int x,y;
//      cout<<"x0"<<x0;
      dx=x1-x0;

      dy=y1-y0;
      m=dy/dx;
  //     cout<<"\n"<<m;
       //|m|<1
       if( (m>=-1 && m<0) ||(m>0&& m<1) )
       {    if(x0<=x1)
	   {	while(x0<=x1)
		 {  putpixel(x0,y0,4);

			y0=y0+m;
			x0=x0++;
		 }

	   }
	   else
	   {
	       while(x0>x1)
	       {
		  putpixel(x0,y0,4);
		  y0=y0-m;
		  x0=x0--;

	       }

	   }

	}
	else if( m>1)
	{
	     if(x0<=x1)
	    {  while(x0<x1)
	       {
		 putpixel(x0,y0,4);
		 y0=y0++;
		 x0=x0+(1/m);
	      }
	   }
	   else
	   { while(x0>x1)
	     { putpixel(x0,y0,4);
	       x0=x0-(1/m);
	       y0=y0--;
	      }
	   }
	}
	else if(m<-1)
	{ if(y0>y1)
	  {
	   while(y0>=y1)
	   { putpixel(x0,y0,4);
	   y0=y0--;
	    x0=x0-(1/m);
	   }
	  }
	  else
	  { while(y0<y1)
	    { putpixel(x0,y0,4);
	    y0=y0++;
	     x0=x0+(1/m);
	    }
	  }

	}
};

void main(){

int gd=DETECT,gm;
initgraph(&gd,&gm,"..\\BGI");
dda(100,100,100,200);
dda(100,200,200,200);
dda(200,200,200,100);
dda(100,100,200,100);
dda(160,50,160,150);
dda(160,50,260,50);
dda(260,150,260,50);

dda(160,150,260,150);
dda(100,200,160,150);
dda(200,200,260,150);
dda(100,100,160,50);
dda(200,100,260,50);

getch();
closegraph();
}
