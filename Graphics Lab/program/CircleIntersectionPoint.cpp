#include <graphics.h>
#include <stdio.h>
#include <math.h>

void drawCircle(int xc, int yc, int r) {
    circle(xc, yc, r);
}

void findAndDrawIntersections(int xc1, int yc1, int r1, int xc2, int yc2, int r2) {
    // Calculate distance between circle centers
    float dx = xc2 - xc1;
    float dy = yc2 - yc1;
    float dist = sqrt(dx * dx + dy * dy);

    // Calculate intersection points if circles intersect
    if (dist <= r1 + r2 && dist >= fabs(r1 - r2)) {
        // Calculate angles between centers
        float angle1 = atan2(dy, dx);
        float angle2 = acos((r1 * r1 + dist * dist - r2 * r2) / (2 * r1 * dist));

        // Calculate intersection points
        float x1 = xc1 + r1 * cos(angle1 + angle2);
        float y1 = yc1 + r1 * sin(angle1 + angle2);
        float x2 = xc1 + r1 * cos(angle1 - angle2);
        float y2 = yc1 + r1 * sin(angle1 - angle2);

        // Draw intersection points
        putpixel(x1, y1, YELLOW);
        setcolor(YELLOW);
        setlinestyle(0,0,3);
        circle(x1,y1,2);
        putpixel(x2, y2, YELLOW);
        circle(x2,y2,2);
    }
}

int main() {
    
    initwindow(600,600);

    int xc1 = 200, yc1 = 200, r1 = 100; 
    int xc2 = 400, yc2 = 300, r2 = 150; 
    setcolor(WHITE);

    drawCircle(xc1, yc1, r1);
    drawCircle(xc2, yc2, r2);

    findAndDrawIntersections(xc1, yc1, r1, xc2, yc2, r2);

    getch();
    closegraph();

    return 0;
}
