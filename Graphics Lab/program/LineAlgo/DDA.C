//        ***********************
//        * DDA ALGORITHM*
//        ***********************

#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<bits/stdc++.h>
using namespace std;

    int main( )
	{
	    float x1,y1,x2,y2;
	    float m,x,y;
	    /* request auto detection */
	    int gdriver = DETECT, gmode, errorcode;

	    /* initialize graphics and local variables */
	    initgraph(&gdriver, &gmode, "");
	     printf("Using DDA Algorithm\n");
	    x1=100;
	    x2=300;
	    y1=300;
	    y2=300;

	    m=(y2-y1)/(x2-x1);

        cout<<"m: "<<m<<endl;

	    if(m<=1)
		{
		 x=x1;
		 y=y1;
		 while(x<=x2)
		    {
		      putpixel(x,y,3);
		      x=x+1;
		      y=y+m;
		    }
		 }
		 if(x2-x1==0)
		{
         x=x1;
		 y=y1;
		 while(y<=y2)
		    {
		      putpixel(x,y,3);
		      y=y+1;
		    }
		 }
	    if(m>1)
		{
         x=x1;
		 y=y1;
		 while(y<=y2)
		    {
		      putpixel(x,y,3);
		      x=x+(1/m);
		      y=y+1;
		    }
		 }

       getch();
       closegraph();
       return 0;
   }

