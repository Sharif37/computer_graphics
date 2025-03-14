#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


      int main(void)
	     {
		 int x,d,y,r,h,k;
		 /* request auto detection */
		 int gdriver = DETECT, gmode, errorcode;
		 initgraph(&gdriver, &gmode, "");

		 printf("Using Bresenham's Circle Algorithm");

		 x=0;
		 r=120;
		 y=r;
		 h=400;
		 k=250;

		 d=3-(2*r);
		 while(x<=y)
		    {
		      putpixel(x+h,y+k,2); //fourth
		      putpixel(y+h,x+k,14);
              putpixel(-y+h,x+k,3);
		      putpixel(-x+h,y+k,3); //third
		      putpixel(-x+h,-y+k,4);
		      putpixel(-y+h,-x+k,4); //second
		      putpixel(y+h,-x+k,5);
		      putpixel(x+h,-y+k,5); //first

		     // printf("D value is: %d\n",d);

		      if(d<0)
			    d=d+(4*x)+6;
		      else
			 {
			    d=d+4*(x-y)+10;
			    y--;
			 }
		      x++;
		    }
	   getch();
      closegraph();
 }

