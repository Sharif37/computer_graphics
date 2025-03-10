#include <graphics.h>
#include <stdio.h>
#include <math.h>

void drawCircle(int xc, int yc, int r) {
    circle(xc, yc, r);
}

void findAndDrawCommonTangents(int xc1, int yc1, int r1, int xc2, int yc2, int r2) {
    // Calculate distance between circle centers
    float dx = xc2 - xc1;
    float dy = yc2 - yc1;
    float dist = sqrt(dx * dx + dy * dy);

    // Calculate angle between centers
    float angle = atan2(dy, dx);

    // Calculate distance between circle centers
    float d = dist - r1 - r2;

    if (d >= 0) {
        // Calculate angle of common tangents
        float alpha = acos((r1 - r2) / dist);

        // Calculate common tangent lengths
        float tangentLength = sqrt(d * d + (r1 - r2) * (r1 - r2));

        // Calculate tangent points on circle 1
        float tx1 = xc1 + r1 * cos(angle + alpha);
        float ty1 = yc1 + r1 * sin(angle + alpha);
        float tx2 = xc1 + r1 * cos(angle - alpha);
        float ty2 = yc1 + r1 * sin(angle - alpha);

        // Calculate tangent points on circle 2
        float tx3 = xc2 + r2 * cos(angle + alpha);
        float ty3 = yc2 + r2 * sin(angle + alpha);
        float tx4 = xc2 + r2 * cos(angle - alpha);
        float ty4 = yc2 + r2 * sin(angle - alpha);

        // Draw common tangents
        line(tx1, ty1, tx3, ty3);
        line(tx2, ty2, tx4, ty4);
    }
}

int main() {
    initwindow(600,600);

    int xc1 = 200, yc1 = 200, r1 = 30; // Circle 1 parameters
    int xc2 = 350, yc2 = 200, r2 = 80; // Circle 2 parameters

    drawCircle(xc1, yc1, r1);
    drawCircle(xc2, yc2, r2);

    findAndDrawCommonTangents(xc1, yc1, r1, xc2, yc2, r2);

    getch();
    closegraph();

    return 0;
}
