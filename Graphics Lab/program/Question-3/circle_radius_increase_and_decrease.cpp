#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

void changeCircleRadius(int x, int y, int *radius) {
    char ch ;
    while(1){
        if(kbhit()){
            ch = getch();
            switch(ch){
                case 'i':
                    *radius += 10;
                    break;
                case 'd':
                    *radius -= 10;
                    break;
                case 27:
                    return;
            }
            cleardevice();
            circle(x, y, *radius);
        }
    }
}


void moveCircle(int *x, int *y, int radius) {
    char ch ;
    while(1){
        if(kbhit()){
            ch = getch();
            switch(ch){
                case 'l':
                    *x -= 10;
                    break;
                case 'r':
                    *x += 10;
                    break;
                case 'u':
                    *y -= 10;
                    break;
                case 'd':
                    *y += 10;
                    break;
                case 27:
                    return;
            }
            cleardevice();
            circle(*x, *y, radius);
        }
    }
}

int main()
{
    int radius = 10;
    int x=250,y=250;
    
    initwindow(500,500);
    circle(x, y, radius);
    //changeCircleRadius(x, y, &radius);
    moveCircle(&x, &y, radius);
    

    getch();
    closegraph();
    return 0;
}
