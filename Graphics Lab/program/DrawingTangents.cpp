#include <graphics.h>
#include <stdio.h>
#include <math.h>

void drawCircle(int xc, int yc, int r) {
    circle(xc, yc, r);
}

void drawTangent(int xc, int yc, int r, int x, int y) {
    // Calculate distance between circle center and given point
    float dx = x - xc;
    float dy = y - yc;
    float dist = sqrt(dx * dx + dy * dy);

    // Calculate angle between center and point
    float angle = atan2(dy, dx);

    // Calculate tangent length
    float tangentLength = sqrt(dist * dist - r * r);

    // Calculate tangent point on circle
    float tx = xc + r * cos(angle);
    float ty = yc + r * sin(angle);

    // Calculate end points of tangent line
    float tx1 = tx + tangentLength * cos(angle + M_PI / 2);
    float ty1 = ty + tangentLength * sin(angle + M_PI / 2);
    float tx2 = tx - tangentLength * cos(angle + M_PI / 2);
    float ty2 = ty - tangentLength * sin(angle + M_PI / 2);

    // Draw tangent line
    line(tx1, ty1, tx2, ty2);
}

int main() {
    
    initwindow(600,600);

    int xc = 200, yc = 200, r = 100; // Circle center and radius
    int x = 350, y =100 ; // Point outside the circle

    drawCircle(xc, yc, r);
    putpixel(x, y, YELLOW); // Draw the point

    drawTangent(xc, yc, r, x, y); // Draw tangent passing through the given point

    getch();
    closegraph();

    return 0;
}
