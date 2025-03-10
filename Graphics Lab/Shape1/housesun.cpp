#include <math.h>
#include <graphics.h>
#include<bits/stdc++.h>
using namespace std;

#define PI 3.14159265

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm," ");
	int left=50,top=10,right=550,bottom=450;

	//background rectangle
	setcolor(WHITE);
    rectangle(left, top, right, bottom);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(101,51,WHITE);

    //sun
    setcolor(BLACK);
    long long p,q,sr1,sr2,sr3,sr4,lcount,t,j;
    float a,b,c,d;
    p=450;q=100;

    sr1=30;
    sr2=sr1+10;
    sr3=sr2+10;
    sr4=sr3+20;

    lcount=6;
    t=360/lcount;

    circle(p,q,sr1);

    for(int i=0;i<=360;i=i+t)
    {
        a=sr2*cos(i*PI / 180.0)+p;
        b=sr2*sin(i*PI / 180.0)+q;
        c=sr3*cos(i*PI / 180.0)+p;
        d=sr3*sin(i*PI / 180.0)+q;

        line(a,b,c,d);

        j=i+t/2;
        a=sr2*cos(j*PI / 180.0)+p;
        b=sr2*sin(j*PI / 180.0)+q;
        c=sr4*cos(j*PI / 180.0)+p;
        d=sr4*sin(j*PI / 180.0)+q;

        line(a,b,c,d);
    }

    //house
    int x,y,f,h,g,e,l,m,n;
    x=170;y=210;
    g=40; f=190; h=130;m=190; // f - distance, triangle h- height, rectangle m- height
    e=60;l=100;n=40;
    //triangle
    line(x-g,y,x+f+g,y);
    line(x-g,y,x+f/2,y-h);
    line(x+f+g,y,x+f/2,y-h);

    //rectangle
    line(x,y,x,y+m);
    line(x+f,y,x+f,y+m);
    line(x,y+m,x+f,y+m);

    //door
    line(x+e,y+m-l,x+e,y+m);
    line(x+f-e,y+m-l,x+f-e,y+m);
    line(x+e,y+m-l,x+f-e,y+m-l);

    //window
    circle(x+n,y+n,25);
    circle(x+f-n,y+n,25);

    //knob
    circle(x+f-e-15,y+m-50,6);

    line(x-70,y+m-40,x,y+m-40);
    line(x+f,y+m-40,x+f+70,y+m-40);


    getch();
	closegraph();
}


