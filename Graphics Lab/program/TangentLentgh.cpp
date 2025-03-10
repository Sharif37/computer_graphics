#include <graphics.h>
#include <stdio.h>
#include <math.h>

void drawCircle(int xc, int yc, int r) {
    circle(xc, yc, r);
}

float calculateTangentLength(int xc, int yc, int r, int x, int y) {
    // Calculate distance between circle center and given point
    float dx = x - xc;
    float dy = y - yc;
    float dist = sqrt(dx * dx + dy * dy);

    // Calculate angle between center and point
    float angle = atan2(dy, dx);

    // Calculate tangent length
    float tangentLength = sqrt(dist * dist - r * r);

    return tangentLength;
}

int main() {
    initwindow(600, 600);

    int xc = 200, yc = 200, r = 100; // Circle center and radius
    int x = 350, y = 100; // Point outside the circle

    drawCircle(xc, yc, r);
    putpixel(x, y, YELLOW); // Draw the point

    float tangentLength = calculateTangentLength(xc, yc, r, x, y);
    printf("Tangent length: %f\n", tangentLength);

    getch();
    closegraph();

    return 0;
}
