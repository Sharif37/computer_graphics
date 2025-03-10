#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<math.h>
#define Pi 3.1416

       int main(void)
	      {
		  double ts,h,k,r,te,i;
		  float y,x;

		  /* request auto detection */
		  int gdriver = DETECT, gmode, errorcode;
		  initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

		  printf("Using Trigonometric Method (Circle)");

		  i=0.2;
		  ts=0;
		  te=45;
		  r=100;
		  h=450;
		  k=150;


		  while(ts<=te)
		       {
			    x=r*cos(ts*Pi/180);
			    y=r*sin(ts*Pi/180);

			    putpixel(x+h,y+k,14);
			    putpixel(y+h,x+k,14);
			    putpixel(-y+h,x+k,14);
			    putpixel(-x+h,y+k,14);
			    putpixel(-x+h,-y+k,3);
			    putpixel(-y+h,-x+k,3);
			    putpixel(y+h,-x+k,3);
			    putpixel(x+h,-y+k,3);

			    ts=ts+i;
			}
	    getch();
       closegraph();
 }

