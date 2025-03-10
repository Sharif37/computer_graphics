#include <graphics.h>
#include<stdio.h>

void drawCircle(int x, int y,int z) {
    cleardevice();
    circle(x, y, z);
    delay(100);
   //floodfill(x, y, WHITE);
}

int main() {

    initwindow(800,800);
    int x,y,z=20;

    scanf("%d %d",&x,&y);

    //int x = getmaxx() / 2;
    //int y = getmaxy() / 2;
    circle(x, y, z);

    char ch;
    do {
        ch = getch();

        switch (ch) {
            case 'l':
                x -= 10;  // Move left
                break;
            case 'r':
                x += 10;  // Move right
                break;
            case 'u':
                y -= 10;  // Move up
                break;
            case 'd':
                y += 10;  // Move down
                break;
            case 'i':
                z+=15;
                break;

        }
       drawCircle(x, y,z);
    } while (ch != 'q');

    closegraph();
    return 0;
}
