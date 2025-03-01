#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    int width = 800, height = 350;
    initwindow(width, height);  
    setbkcolor(LIGHTGRAY);
    cleardevice();

    setfillstyle(SOLID_FILL, BLACK);
    setcolor(BLUE);
    bar(10, 10, 460, 110);
    setfillstyle(SOLID_FILL, WHITE);
    setcolor(RED);
    bar(10, 110, 460, 210);
    setfillstyle(SOLID_FILL, GREEN);
    setcolor(GREEN);
    bar(10, 210, 460, 310);

    int points[] = {10, 10, 10, 310, 150, 160};
    setfillstyle(SOLID_FILL, RED);
    setcolor(RED);
    fillpoly(3, points);

    getch();
    closegraph();
    return 0;
}