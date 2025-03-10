#include<graphics.h>
#include<stdio.h>
#include<conio.h>

int main(){

initwindow(800,800);
setlinestyle(0,0,10);
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
rectangle(50,100,750,750);
floodfill(55,110,WHITE);

setcolor(BLACK);
line(130,210,620,210);
line(130,210,130,650);
line(620,210,620,480);
line(130,650,445,650);
circle(555,590,112);
line(555,535,555,642);
line(490,590,620,590);
setlinestyle(0,0,20);
line(135,280,615,280);
setlinestyle(0,0,10);
//setfillstyle(SOLID_FILL,BLACK);
rectangle(190,150,240,260);
rectangle(530,150,570,250);
line(220,360,540,360);
line(220,360,220,580);
line(220,580,430,580);
line(540,360,540,465);
line(220,405,540,405);
line(220,460,540,460);
line(450,520,220,520);
line(270,360,270,580);
line(340,360,340,580);
line(410,360,410,580);
line(470,360,470,500);
floodfill(190,150,BLACK);
getch();
closegraph();
return 0;

}
