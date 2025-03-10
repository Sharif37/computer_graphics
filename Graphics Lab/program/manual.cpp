#include<stdio.h>
#include <math.h>
#include <graphics.h>

void picture(float x, float y, float sz)
{


}

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm," ");

	setbkcolor(WHITE);
	cleardevice();

    float x,y,sz;
    x=150;y=180,sz=1;
    picture(x,y,sz);

    int chr2,chr1,flag;
    flag=1;
    while(1) {
        chr1 = getch();
        chr2=getch();  //to read arrow key
        printf("%d",chr2);
        switch(chr2)
          {
           case 72: { cleardevice();y=y-10; picture(x,y,sz);}
              break;
           case 80: {  cleardevice();y=y+10; picture(x,y,sz);}
              break;
           case 75: {  cleardevice();x=x-10; picture(x,y,sz);}
              break;
           case 77: {  cleardevice();x=x+10; picture(x,y,sz);}
              break;
           case 43: {  cleardevice();sz=sz*1.2; picture(x,y,sz);}
              break;
           case 45: {  cleardevice();sz=sz*0.8; picture(x,y,sz);}
              break;
           default: {closegraph();flag=0;}
              break;
          };
          if(flag==0) break;
        }

}



