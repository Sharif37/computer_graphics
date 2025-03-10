#include<graphics.h>
#include<stdio.h>

void drawRectangle(int x, int y) {
    cleardevice();
    rectangle(x, y, x+150,y+150);
    delay(100);
   //floodfill(x, y, WHITE);
}

int main() {

    initwindow(800,800);
    int x,y;

     printf("give left right values\n");
    //std::cout<<"give the circle centre"<<std::endl;
    scanf("%d %d",&x,&y);


    //int x = getmaxx() / 2;
    //int y = getmaxy() / 2;
    rectangle(x, y, x+150,y+150);

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
        }
       drawRectangle(x, y);
    } while (ch != 'q');



    return 0;
}
