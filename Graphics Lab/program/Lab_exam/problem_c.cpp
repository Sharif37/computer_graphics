#include <graphics.h>
#include <stdio.h>
#include <math.h>


//to draw bar need to setfillstyle to SOLID_FILL
    //inner circle radius will be calculate as double r = (a * sqrt(3)) / 6;
    //a = side of the equilateral triangle
    //r = radius of the inner circle
    //outter circle radius will be calculate as double R = (a * sqrt(3)) / 3;
    //a = side of the equilateral triangle
    //R = radius of the outter circle


void outtercircle(int x1,int y1 , int x2, int y2, int x3 , int y3){
    int points[] = {x1,y1,x2,y2,x3,y3,x1,y1}; 
    int cx = (x1 + x2 + x3) / 3;
    int cy = (y1 + y2 + y3) / 3;
    int dx= x2 - x1 ;
    int dy = y2 - y1 ;
    int a = sqrt(dx*dx + dy*dy) ;
    int r =  (a * sqrt(3)) / 3 ;
    setlinestyle(SOLID_LINE, 0, 2);
    setcolor(BLACK);
    drawpoly(4, points); 
    setcolor(BLACK);
    circle(cx, cy, r);
}


void increaseTriange(int *x1, int *y1 ,int *x2,int *y2 ,int *x3,int *y3 ){
    char ch;
    while (1) {
        if (kbhit()) {
            ch = getch();
            switch (ch) {
                case 'i': 
                    *x2 += 10;
                    break;
                case 'd': // Down
                *x2 -= 10;
                    break;
                
                case 27: // Escape key
                    return;
            }
            cleardevice();
            //drawSmiley(*x, *y, radius);
            int dx= *x2 - *x1 ;
            int dy = *y2 - *y1 ;
            int a = sqrt(dx*dx + dy*dy) ;
            *x3 = (*x1+*x2)/2, *y3 = 100+(sqrt(3)*a )/2;
            outtercircle(*x1,*y1,*x2,*y2,*x3,*y3) ;
        }
    }
}

void shape1(){
   
    int x1 = 100, y1 = 100, x2 = 400, y2 = 100, x3 = 250, y3 = 360;
    outtercircle(x1,y1,x2,y2,x3,y3) ;
    increaseTriange(&x1,&y1,&x2,&y2,&x3,&y3);
    // x1 = 100, y1 = 100, x2 = 700, y2 = 100 ;
    // int dx= x2 - x1 ;
    // int dy = y2 - y1 ;
    // int a = sqrt(dx*dx + dy*dy) ;
    
    // x3 = (x1+x2)/2, y3 = 2*y3-100;
    // outtercircle(x1,y1,x2,y2,x3,y3) ;

    

   
    
}


int main() {

    int width = 1024, height = 1024;
    initwindow(width, height);  
    setbkcolor(WHITE);
    cleardevice();

    shape1();

    getch();
    closegraph();
    return 0;
}





