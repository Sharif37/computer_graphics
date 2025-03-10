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
    //------------------Body of the bus
    setcolor(BLACK);
    setlinestyle(0,0,3);
    rectangle(left+100,top+200,left+350,top+280);
    circle(left+115,top+215,7);
    line(left+180,top+215,left+195,top+215);
    line(left+250,top+215,left+265,top+215);
    line(left+275,top+215,left+290,top+215);
    //------------------------------------bus wheel 1
    int w1_x = 270, w1_y = 330;
    setcolor(0);
    circle(w1_x,w1_y,30);
    setfillstyle(1,0);
    floodfill(w1_x+1,w1_y+4,0);
    floodfill(w1_x+1,w1_y-6,0);
    setcolor(15);
    circle(w1_x,w1_y,27);
    setfillstyle(1,15);
    floodfill(w1_x+1,w1_y+4,15);
    setcolor(0);
    circle(w1_x,w1_y,15);
    //---------------------------bus wheel 2
    int w2_x = 380, w2_y = 330;
    setcolor(0);
    circle(w2_x,w2_y,30);
    setfillstyle(1,0);
    floodfill(w2_x+1,w2_y+4,0);
    floodfill(w2_x+1,w2_y-6,0);
    setcolor(15);
    circle(w2_x,w2_y,27);
    setfillstyle(1,15);
    floodfill(w2_x+1,w2_y+4,15);
    setcolor(0);
    circle(w2_x,w2_y,15);
    //---------------------- the upper part
    rectangle(left+270,top+120,left+350,top+200);
    rectangle(left+185,top+120,left+270,top+200);
    line(left+185,top+120,left+140,top+120);
    line(left+140,top+120,left+100,top+200);


    getchar();
    closegraph();
    return 0;
}






