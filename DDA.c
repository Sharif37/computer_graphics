#include <graphics.h>
#include <stdio.h>

void DDA(int x1, int y1, int x2, int y2) {
    int x, y;
    float m, y_float;
    printf("Using DDA Algorithm\n");

    m = (float)(y2 - y1) / (x2 - x1);

    if (m <= 1) {
        x = x1;
        y_float = y1;
        while (x <= x2) {
            y = (int)(y_float + 0.5);  
            putpixel(x, y, RED);
            x = x + 1;
            y_float = y_float + m;
        }
    } else {
        y = y1;
        float x_float = x1;
        while (y <= y2) {
            x = (int)(x_float + 0.5); 
            putpixel(x, y, RED);
            y = y + 1;
            x_float = x_float + (1 / m);
        }
    }
}

int main() {
    int gd = DETECT, gm;
    int width = 800, height = 700;
    initwindow(width, height);  

    DDA(200, 250, 350, 450);

    getch();
    closegraph();
    return 0;
}
