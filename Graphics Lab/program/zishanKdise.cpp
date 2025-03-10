#include <graphics.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm," ");

   int height= GetSystemMetrics(SM_CYSCREEN);
   int width= GetSystemMetrics(SM_CXSCREEN);

   initwindow(width,height,"Practice");

    rectangle(50,30,800,500);
    setfillstyle(1,WHITE);
    floodfill(51,31,WHITE);

    setcolor(BLACK);
    setlinestyle(0,0,5);
    line(110,373,662,370);

    setcolor(BLACK);
    setlinestyle(0,0,5);
    arc(295,346,90,245,30);


    setcolor(BLACK);
    setlinestyle(0,0,5);
    arc(457,346,296,90,30);

    setcolor(BLACK);
    setlinestyle(0,0,6);
    line(287,317,465,314);

    setcolor(BLACK);
    setlinestyle(0,0,6);
    setfillstyle(SOLID_FILL,BLACK);
    rectangle(365,235,389,305);
    floodfill(370,255,BLACK);


    setcolor(BLACK);
    setlinestyle(0,0,5);
    line(370,38,278,94);

    setcolor(BLACK);
    setlinestyle(0,0,5);
    line(370,38,465,94);

    setcolor(BLACK);
    setlinestyle(0,0,5);
    line(278,94,370,142);

    setcolor(BLACK);
    setlinestyle(0,0,5);
    line(370,142,465,94);

    setcolor(BLACK);
    setlinestyle(0,0,5);
    line(370,142,372,201);

    setcolor(BLACK);
    setlinestyle(0,0,5);
    line(278,94,280,160);

    setcolor(BLACK);
    setlinestyle(0,0,5);
    line(463,160,465,94);


    setcolor(BLACK);
    setlinestyle(0,0,5);
    line(280,160,372,201);

    setcolor(BLACK);
    setlinestyle(0,0,5);
    line(463,160,372,201);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    circle(227,320,10);
    floodfill(230,322,BLACK);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    circle(197,255,10);
    floodfill(199,257,BLACK);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    circle(207,183,10);
    floodfill(209,185,BLACK);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    circle(535,320,10);
    floodfill(537,324,BLACK);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    circle(557,255,10);
    floodfill(559,257,BLACK);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    circle(535,183,10);
    floodfill(537,185,BLACK);

    setcolor(BLACK);
    setlinestyle(0,0,7);
    line(293,145,352,175);

    setcolor(BLACK);
    setlinestyle(0,0,7);
    line(396,175,450,145);

	getch();
	closegraph();
}
