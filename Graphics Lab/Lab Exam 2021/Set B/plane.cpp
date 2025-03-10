#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    // int gd,gm;
    // detectgraph(&gd,&gm);
    // initgraph(&gd,&gm," ");
    initwindow(600,600);

    int left = 100,top = 50, right = 500,bottom = 450;
    //White Background
    setcolor(WHITE);
    rectangle(left,top,right,bottom);
    setfillstyle(1,15);
    floodfill(161,51,WHITE);
    //Body of the plane
    setcolor(BLACK);
    setlinestyle(0,0,2);
    int bx1 = 200,by1 = 200, bx2 = 350, by2 = 195;
    line(bx1,by1,bx2,by2);
    int cx1 = 200,cy1 = 240, cx2 = 350, cy2 = 240;
    line(cx1,cy1,cx2,cy2);
    // windows
    rectangle(bx1+10,by1+10,bx1+20,by1+20);
    rectangle(bx1+30,by1+10,bx1+40,by1+20);
    rectangle(bx1+50,by1+10,bx1+60,by1+20);
    rectangle(bx1+70,by1+10,bx1+80,by1+20);
    rectangle(bx1+90,by1+10,bx1+100,by1+20);
    rectangle(bx1+110,by1+10,bx1+120,by1+20);

    // the front part of the plane
    arc(bx2,by2+10,45,90,10);
    line(bx2+7,by2+3,bx2+40,cy2-20);
    arc(bx2+40,cy2-10,270,90,10);
    line(bx2+40,cy2,cx2,cy2);
    // window of the front part
    line(bx2+5,by2+12,bx2+22,by2+12);
    line(bx2+5,by2+12,bx2+5,by2+25);
    line(bx2+5,by2+25,bx2+37,by2+25);
    //the back part
    line(bx1,by1,bx1-40,by1-15);
    line(bx1-40,by1-15,bx1-38,by1+5);
    line(bx1-38,by1+5,bx1-15,by1+30);
    line(bx1-15,by1+30,cx1,cy1);

    // plane upper wing
    //bx1 = 200,by1 = 200, bx2 = 350, by2 = 195;
    line(bx2-50,by2+2,bx2-100,by2-40);
    line(bx2-100,by2-40,bx2-120,by2-40);
    line(bx2-120,by2-40,bx2-100,by2+3);
    //plane bottom wing
    //cx1 = 200,cy1 = 240, cx2 = 350, cy2 = 240;
    line(cx2-45,cy2-5,cx2-100,cy2+60);
    line(cx2-100,cy2+60,cx2-120,cy2+60);
    line(cx2-120,cy2+60,cx2-90,cy2-5);
    line(cx2-90,cy2-5,cx2-45,cy2-5);

    //remove extra part
    setcolor(15);
    line(cx2-89.9,cy1-1,cx2-49,cy1);

    getchar();
    closegraph();
    return 0;
}







