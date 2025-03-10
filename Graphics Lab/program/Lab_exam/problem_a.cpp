#include <graphics.h>
#include <stdio.h>
#include <math.h>

void drawCircle(int h, int k, int r)
{
    // Draw six circles that intersect at the same point
    circle(h, k, r);     // Center circle
    circle(h + r, k, r); // Right
     circle(h - r, k, r); // Left
     circle(h, k + r, r); // Bottom
     circle(h, k - r, r); // Top
     circle(h + r * cos(M_PI / 4), k + r * sin(M_PI / 4), r); // Top-right
    circle(h - r * cos(M_PI / 4), k - r * sin(M_PI / 4), r); // Bottom-left
    circle(h + r * cos(M_PI / 4), k - r * sin(M_PI / 4), r); // Top-right
    circle(h - r * cos(M_PI / 4), k + r * sin(M_PI / 4), r); // Bottom-left
}


int main()
{
    int width = 1024, height = 1024;
    initwindow(width, height);
    cleardevice();

    int h = 300, k = 300, r = 100;
    drawCircle(h, k, r);

    getch();
    closegraph();
    return 0;
}