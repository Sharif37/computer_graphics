#include<graphics.h>
int main(){
    initwindow(600,600);

    outtextxy(280+4,280-50,"WIFI");

    setlinestyle(0,0,1);
    setfillstyle(SOLID_FILL,WHITE);
    circle(300,300,8);
    floodfill(300,300,WHITE);
    setlinestyle(0,0,5);
    arc(300,300,45,90+45,18);
    arc(300,300,45,90+45,28);
    arc(300,300,45,90+45,38);



   getch();
   closegraph();
}
