#include <graphics.h>
#include <stdio.h>
#include <math.h>


int lineTouchesCircle(int x1, int y1, int x2, int y2, int xc, int yc, int r) {

    circle(xc, yc, r);

    line(x1, y1, x2, y2);


    int dx = x2 - x1;
    int dy = y2 - y1;
    double m = dy / (double)dx;
    double c = y1 - m * x1;

    double a = 1 + m * m;
    double b = 2 * (m * c - m * yc - xc);
    double c_eq = xc * xc + yc * yc + c * c - 2 * yc * c - r * r;

    double discriminant = b * b - 4 * a * c_eq;
    printf("%lf /n",b);
    printf("%lf",discriminant);


    // No real roots, line does not intersect circle
    if (discriminant < 0) {

        return 0;
    } else if (discriminant == 0) {
        // One real root, line is tangent to circle
        double x = -b / (2 * a);
        double y = m * x + c;



        setcolor(RED);
        setlinestyle(0,0,2);
        circle(x, y, 2);


         setcolor(WHITE);

        if ((x >= x1 && x <= x2) || (x >= x2 && x <= x1)) {
            return 1; // Line touches circle
        } else {
            return 0; // Line does not touch circle
        }
    } else {
        // Two real roots, line intersects circle
        double x1_root = (-b + sqrt(discriminant)) / (2 * a);
        double y1_root = m * x1_root + c;
        double x2_root = (-b - sqrt(discriminant)) / (2 * a);
        double y2_root = m * x2_root + c;

        setcolor(YELLOW);
        setlinestyle(0,0,2);

        circle(x1_root, y1_root, 2); // Draw intersection points
        circle(x2_root, y2_root, 2);
        setcolor(WHITE);

        if (((x1_root >= x1 && x1_root <= x2) || (x1_root >= x2 && x1_root <= x1)) &&
            ((y1_root >= y1 && y1_root <= y2) || (y1_root >= y2 && y1_root <= y1))) {
            return 2; // Line touches circle
        } else if (((x2_root >= x1 && x2_root <= x2) || (x2_root >= x2 && x2_root <= x1)) &&
                   ((y2_root >= y1 && y2_root <= y2) || (y2_root >= y2 && y2_root <= y1))) {
            return 2; // Line touches circle
        } else {
            return 0; // Line does not touch circle
        }
    }
}

int main() {
    initwindow(400, 400);

    int x1 = 22, y1 = 200+80;
    int x2 = 200, y2 = 100-80;
    int xc = 200, yc = 200, r = 80;


    if (lineTouchesCircle(x1, y1, x2, y2, xc, yc, r)==1) {
        outtext("The line touches the circle.");
    }

    if(lineTouchesCircle(x1, y1, x2, y2, xc, yc, r)==2){
       outtext("The line intersects the circle.");
    }

    else {
       outtext("The line does not touch the circle.");
    }

    getch();
    closegraph();

    return 0;
}
