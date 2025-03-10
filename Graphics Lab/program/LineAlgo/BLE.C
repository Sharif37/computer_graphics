//        ************************************
//        * Bresenham's Line Algorithm *
//        ************************************

#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#include<bits/stdc++.h>
using namespace std;


     int main( )
	 {
	     float x1,y1,x2,y2,dx,dy,ds,dt,d,x,y,m,ret,val,xa,ya,xb,yb;
	     /* request auto detection */
	     int gdriver = DETECT, gmode, errorcode;

	    /* initialize graphics and local variables */
	     initgraph(&gdriver, &gmode,"");

	     xa=100;
	     ya=200;

	     xb=100;
	     yb=300;

	     m=(yb-ya)/(xb-xa);

	     cout<<"m: "<<m<<endl;

         if(m>=0 && m<=1){
             x1=xa;  x2=xb;
             y1=ya;  y2=yb;
         }
         else if(m>1){
             x1=ya;  x2=yb;
             y1=xa;  y2=xb;
         }
         else if(m<-1){
            x1=-ya;  x2=-yb;
            y1=xa;  y2=xb;
         }
         else if(m<=0 && m>=-1){
            x1=xa;  x2=xb;
            y1=-ya;  y2=-yb;
         }

         x=x1;
         y=y1;
         dx=x2-x1;
	     dy=y2-y1;
	     dt=2*(dy-dx);
	     ds=2*dy;
	     d=2*dy-dx;

	     printf("Using Bresenham's Line Algorithm\n");
	     putpixel(xa,ya,1);

	     while(x<=x2)
		    {
			x=x+1;
			if(d<0)
			     d=d+ds;
			else
			     {
				y=y+1;
				d=d+dt;
			     }
         if(m>=0 && m<=1) putpixel(x,y,1);
         else if(m>1) putpixel(y,x,1);
         else if(m<=0 && m>=-1) putpixel(x,-y,1);
         else if(m<-1) putpixel(y,-x,1);
		    }

       getch();
	   closegraph();
	   return 0;
}

