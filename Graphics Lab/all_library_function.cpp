#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<graphics.h>
#include<conio.h>

int main(){
    int gd = DETECT, gm;
    int width = 768, height = 500 ;
    initwindow(width, height);  
    cleardevice();

    //Draw a arc
    //arc(x, y, start_angle, end_angle, radius);
    arc(100, 100, 0, 180, 50);
    //Draw a bar
    //bar(left, top, right, bottom);
    bar(200, 100, 300, 200);
    //Draw a bar3d
    //bar3d(left, top, right, bottom, depth, topflag);
    bar3d(350, 100, 450, 200, 50, 1);
    //Draw a circle
    //circle(x, y, radius);
    circle(100, 300, 50);
    //Draw a ellipse
    //ellipse(x, y, start_angle, end_angle, xradius, yradius);
    ellipse(250, 300, 0, 360, 50, 25);
    //Draw a line
    //line(x1, y1, x2, y2);
    line(350, 300, 450, 400);
    //Draw a rectangle
    //rectangle(left, top, right, bottom);
    rectangle(500, 300, 600, 400);
    //Draw a sector
    //sector(x, y, start_angle, end_angle, xradius, yradius);
    sector(650, 300, 0, 180, 50, 25);
    //Draw a polygon
    int points[] = {100, 100, 200, 100, 150, 200, 100, 100};
    drawpoly(4, points);
    //Draw a fill polygon
    int points2[] = {250, 100, 350, 100, 300, 200, 250, 100};
    fillpoly(4, points2);
    //Draw a flood fill
    floodfill(400, 350, WHITE);
    //Draw a putpixel
    putpixel(500, 350, RED);
    //draw pieslice
    //pieslice(x, y, start_angle, end_angle, radius);
    pieslice(650, 350, 0, 180, 50);

    //setcolor(RED);
    //setfillstyle(SOLID_FILL, RED);
    //floodfill(400, 350, RED);
   // void setfillpattern( char *upattern, int color );
    //void setfillstyle( int pattern, int color );
   //void setlinestyle( int linestyle, unsigned upattern, int thickness );
  //for writing text
    //void outtextxy( int x, int y, const char *string );
    // outtextxy(100, 450, "Arc");
    // outtextxy(250, 450, "Bar");
    // outtextxy(400, 450, "Bar3d");
    // outtextxy(550, 450, "Circle");
    // outtextxy(700, 450, "Ellipse");
    // outtextxy(100, 200, "Line");
    // outtextxy(250, 200, "Rectangle");
    // outtextxy(400, 200, "Sector");
    // outtextxy(550, 200, "Polygon");
    // outtextxy(700, 200, "Fill Polygon");
    // outtextxy(100, 50, "Flood Fill");
    // outtextxy(250, 50, "Put Pixel");
    // outtextxy(400, 50, "Pie Slice");
    //writing text with different font and directions 
    //void settextstyle( int font, int direction, int charsize );
    // settextstyle(1, 0, 1);
    // outtextxy(100, 50, "Arc");
    // settextstyle(2, 0, 2);
    // outtextxy(250, 50, "Bar");
    settextstyle(3, 0, 3);
    outtextxy(400, 50, "Bar3d");
    settextstyle(4, 0, 4);
    outtextxy(550, 50, "Circle");
    // settextstyle(5, 0, 5);
    // outtextxy(700, 50, "Ellipse");
    // settextstyle(6, 0, 6);
    // outtextxy(100, 200, "Line");
    // settextstyle(7, 0, 7);
    // outtextxy(250, 200, "Rectangle");
    // settextstyle(8, 0, 8);
    // outtextxy(400, 200, "Sector");
    // settextstyle(9, 0, 9);
    // outtextxy(550, 200, "Polygon");
    // settextstyle(10, 0, 10);
    // outtextxy(700, 200, "Fill Polygon");
    // settextstyle(11, 0, 11);
    // outtextxy(100, 350, "Flood Fill");
    // settextstyle(12, 0, 12);
    // outtextxy(250, 350, "Put Pixel");
    // settextstyle(13, 0, 13);
    // outtextxy(400, 350, "Pie Slice");
    //settextjustify( int horiz, int vert );
    //void settextstyle( int font, int direction, int charsize );
    //settextjustify(LEFT_TEXT, TOP_TEXT);
    //settextstyle(1, 0, 1);

    

   

    getch();
    closegraph();
    return 0;
}