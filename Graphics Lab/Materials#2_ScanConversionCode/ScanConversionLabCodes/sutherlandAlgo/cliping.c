#include <graphics.h>
#include <stdio.h>

#define LEFT 1
#define RIGHT 2
#define BOTTOM 4
#define TOP 8

int xmin = 2, xmax = 5, ymin = 1, ymax = 6;

//compute region code
int computeCode(int x, int y) {
    int code = 0;
    if (x < xmin) code |= LEFT;
    if (x > xmax) code |= RIGHT;
    if (y < ymin) code |= BOTTOM;
    if (y > ymax) code |= TOP;
    return code;
}

// Cohen-Sutherland algorithm
void cohenSutherlandClip(int x1, int y1, int x2, int y2) {
    int code1 = computeCode(x1, y1);
    int code2 = computeCode(x2, y2);
    int accept = 0;

    while (1) {
        if ((code1 == 0) && (code2 == 0)) {  // Both endpoints inside
            accept = 1;
            break;
        } else if (code1 & code2) {  // Both endpoints share an outside region
            break;
        } else {
            int x, y;
            int codeOut = code1 ? code1 : code2;  // Pick an endpoint outside

            // Avoid division by zero
            float m = (x2 - x1) != 0 ? (float)(y2 - y1) / (x2 - x1) : 0;

            // Find intersection point
            if (codeOut & TOP) {  
                x = x1 + (ymax - y1) / m;
                y = ymax;
            } else if (codeOut & BOTTOM) {  
                x = x1 + (ymin - y1) / m;
                y = ymin;
            } else if (codeOut & RIGHT) {  
                y = y1 + m * (xmax - x1);
                x = xmax;
            } else if (codeOut & LEFT) {  
                y = y1 + m * (xmin - x1);
                x = xmin;
            }

            // Replace outside point with intersection point 
            if (codeOut == code1) {
                x1 = x;
                y1 = y;
                code1 = computeCode(x1, y1);
            } else {
                x2 = x;
                y2 = y;
                code2 = computeCode(x2, y2);
            }
        }
    }

    if (accept) {
        setcolor(GREEN);
        line(x1 * 50, y1 * 50, x2 * 50, y2 * 50);
    }
}

int main() {
    initwindow(800, 800);

    // Scale factor 
    int scale = 50;

    //  endpoints
    int Ax = 6, Ay = 2, Bx = 3, By = 8;
    int Cx = 1, Cy = 2, Dx = 3, Dy = 4;

    // clipping window
    setcolor(WHITE);
    rectangle(xmin * scale, ymin * scale, xmax * scale, ymax * scale);

    //  original lines in RED
    setcolor(RED);
    line(Ax * scale, Ay * scale, Bx * scale, By * scale);
    line(Cx * scale, Cy * scale, Dx * scale, Dy * scale);

    //line clipping
    cohenSutherlandClip(Ax, Ay, Bx, By);
    cohenSutherlandClip(Cx, Cy, Dx, Dy);

    getch();
    closegraph();
    return 0;
}
