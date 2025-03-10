#include <math.h>
#include <graphics.h>

int main()
{
	initwindow(600,600);
	int left=50,top=50,right=550,bottom=350;

	//background rectangle
	setcolor(WHITE);
    rectangle(left, top, right, bottom);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(101,51,WHITE);

    //body
    int x,y,d,h;
    x=180;y=150;h=90; d= 252;

    //plane body
    setcolor(BLACK);
    //setlinestyle(0,0,5);
    line(x,y,x+d,y);
    line(x+41,y+h,x+d+65,y+h);
    line(x-80,y-30,x,y);
    arc(220, 121, 180, 272, 120);

    //windows
    int a,b,r,c,z; //r- arm of a square, z- distance between squares
    a=200; b=180; r=25; z=15;
    c=z+r;
    rectangle(a, b, a+r, b+r);
    rectangle(a+c, b, a+r+c, b+r);
    rectangle(a+2*c, b, a+r+2*c, b+r);
    rectangle(a+3*c, b, a+r+3*c, b+r);
    rectangle(a+4*c, b, a+r+4*c, b+r);
    rectangle(a+5*c, b, a+r+5*c, b+r);

    //horizontal line upper
    line(a+6*c+20,b,a+r+6*c+20,b);
    //horizontal line lower
    line(a+6*c+20,b+r-2,a+r+6*c+40,b+r-2);
    //vertical line
    line(a+6*c+20,b,a+6*c+20,b+r-2);

    //front of the plane
    arc(435, 210, 40, 95, 60);
    arc(495, 221, 270, 26, 20);
    line(480,172,512,213);

    //upper wing
    //hline
    line(280,y-70,310,y-70);
    //vline
    line(280,y-70,300,y);
    line(310,y-70,370,y);

    //lower wing
    setcolor(BLACK);
    //hline
    line(300,y+h-15,370,y+h-15);
    line(250,y+80+h,280,y+80+h);
    //vline
    line(250,y+80+h,300,y+h-15);
    line(280,y+80+h,370,y+h-15);

    setcolor(WHITE);
    line(292,y+h,355,y+h);






	getch();
	closegraph();
}
