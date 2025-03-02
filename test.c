#include <graphics.h>


void shape1(){
    int points[] = {100, 100, 400, 100, 250,360, 100, 100}; 
    int x1 = 100, y1 = 100, x2 = 400, y2 = 100, x3 = 250, y3 = 360;
    int cx = (x1 + x2 + x3) / 3;
    int cy = (y1 + y2 + y3) / 3;
    int r = 87;
    setlinestyle(SOLID_LINE, 0, 10);
    setcolor(BLACK);
    drawpoly(4, points); 
    setcolor(BLACK);
    circle(cx, cy, r);

    //to draw bar need to setfillstyle to SOLID_FILL
    //inner circle radius will be calculate as double r = (a * sqrt(3)) / 6;
    //a = side of the equilateral triangle
    //r = radius of the inner circle
    //outter circle radius will be calculate as double R = (a * sqrt(3)) / 3;
    //a = side of the equilateral triangle
    //R = radius of the outter circle

    setfillstyle(SOLID_FILL, BLACK);
    bar(245, 100, 255, 0);
    
}
void madrid_logo(){
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    line(250,270,250,200);
    line(250,200,280,200);
    line(280,200,280,220);
    
    circle(280,220,140);
    circle(280,220,160);
    
    line(280,220,265,220);
    line(265,220,265,235);
    line(265,235,280,235);
    line(280,235,280,250);
    line(280,250,265,250);
    line(265,250,265,276);
    
    line(250,294,250,310);
    line(265,299,265,310);
    line(250,310,265,310);
    
    arc(280,220,122,240,60);
    arc(280,220,135,248,80);
    
    arc(280,220,133,221,100);
    arc(280,220,125,221,120);
    
    arc(280,220,320,55,120);
    
    arc(280,220,320,32,100);
    
    
    arc(280,220,255,320,60);
    arc(280,220,260,320,80);
    
    line(280,175,295,175);
    line(280,175,265,164);
    line(295,175,310,164);
    
    line(280,193,315,174);
    line(280,193,247,169);
    
    line(190,300,205,285);
    line(368,298,355,282);
    
    //line(355,290,340,270);
    line(340,270,325,259);
    line(340,210,358,205);
    line(349,180,363,165);
    
    line(225,163,212,148);
    line(243,148,210,122);
    line(320,150,348,122);
    
    arc(290,220,70,112,60); //soto ta
    arc(280,220,60,117,80);
    
    arc(280,220,10,53,60);
    arc(280,220,10,30,80);
    outtextxy(240,395,"HALA MADRID");
    outtextxy(160,415,"Unleashing The Power Of The White Army");
    
}
void nationalFlag(){
    // Draw the green rectangle (flag body)
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(150, 40, 450, 180);
    floodfill(160, 50, GREEN);

    // Draw the red circle (flag's center)
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    circle(300, 110, 40);  // Adjusted radius for better appearance
    floodfill(300, 110, RED);

    // Draw the flag pole
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(138, 35, 150, 450);
    floodfill(140, 40, BLUE);

    // Draw the base of the flag pole
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
    bar(130, 450, 160, 460);

}

void palestineFlag(){

    setfillstyle(SOLID_FILL, BLACK);
    setcolor(BLUE);
    bar(10, 10, 460, 110);
    setfillstyle(SOLID_FILL, WHITE);
    setcolor(RED);
    bar(10, 110, 460, 210);
    setfillstyle(SOLID_FILL, GREEN);
    setcolor(GREEN);
    bar(10, 210, 460, 310);

    int points[] = {10, 10, 10, 310, 150, 160};
    setfillstyle(SOLID_FILL, RED);
    setcolor(RED);
    fillpoly(3, points);

}


void drawEmoji(int x, int y, int radius){
    circle(x, y, radius);
   // circle(x-radius/3,y-radius/3 ,radius/10);
    //circle(x+radius/3,y-radius/3 ,radius/10);
    ellipse(x+radius/3,y-radius/3,0,360,radius/10,radius/5);
    fillellipse(x+radius/3 , y-radius/3 , radius/10, radius/5);

    pieslice(x - radius / 3, y - radius / 3, 0, 180, radius / 10);

 setcolor(LIGHTGRAY);
 arc(x, y + radius / 5, 150, 320, radius/2); 
 arc(x+20, y + (radius / 3)- 40 , 180, 290, radius/1.5); 
 // Calculate midpoint between arc centers
int fill_x = x - 45;  // Midpoint between x and x+20
int fill_y = y + 20;

//circle(fill_x,fill_y,5);
floodfill(fill_x, fill_y, LIGHTGRAY);
 setcolor(BLACK);


}


int drawSmiley(int x, int y, int radius) {
    setcolor(BLACK);
    setlinestyle(SOLID_LINE, 0, 5);
    circle(x, y, radius);
    circle(x - radius / 3, y - radius / 3, radius / 10); // Left eye
    circle(x + radius / 3, y - radius / 3, radius / 10); // Right eye
    arc(x, y + radius / 10, 180, 360, radius / 2); // Smile
    line(x - radius / 2, y + radius / 10, x + radius / 2, y + radius / 10); // Connect smile arc with a line

    return 0;
}

void moveSmiley(int *x, int *y, int radius) {
    char ch;
    while (1) {
        if (kbhit()) {
            ch = getch();
            switch (ch) {
                case 'u': // Up
                    *y -= 10;
                    break;
                case 'd': // Down
                    *y += 10;
                    break;
                case 'l': // Left
                    *x -= 10;
                    break;
                case 'r': // Right
                    *x += 10;
                    break;
                case 27: // Escape key
                    return;
            }
            cleardevice();
            //drawSmiley(*x, *y, radius);
            drawEmoji(*x,*y,radius);
        }
    }
}




void drawWiFi(int x, int y) {
    for (int i = 1; i <= 3; i++) {
        arc(x, y, 45, 135, i * 15);
    }
    circle(x, y , 5);
}

void movewifi(int *x,int *y){
    char ch;
    while(1){
        if(kbhit()){
            ch = getch();
            switch(ch){
                case 'u':
                    *y -= 10;
                    break;
                case 'd':
                    *y += 10;
                    break;
                case 'l':
                    *x -= 10;
                    break;
                case 'r':
                    *x += 10;
                    break;
                case 27:
                    return;
            }
            cleardevice();
            drawWiFi(*x, *y);
        }
    }
}




void shape3(){
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
    circle(250, 250, 100);
    

}

void drawMonitor(int x, int y, int width, int height) {
    rectangle(x, y, x + width, y + height);
    int midX = x + width / 2;
    int midY = y + height / 2;
    
    bar(midX - 5, y + height, midX + 5, y + height + 30);
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, WHITE); 
    fillellipse(midX, y + height, 5, 5); 
    ellipse(midX, y + height + 30, 0, 360, 30, 10);
    setfillstyle(SOLID_FILL, BLACK);
    setcolor(BLACK);
    fillellipse(midX, y + height + 30, 30, 10); 
}

void moveMonitor(int *x, int *y, int width, int height) {
    char ch ;
    while(1){
        if(kbhit()){
            ch = getch();
            switch(ch){
                case 'u':
                    *y -= 10;
                    break;
                case 'd':
                    *y += 10;
                    break;
                case 'l':
                    *x -= 10;
                    break;
                case 'r':
                    *x += 10;
                    break;
                case 27:
                    return;
            }
            cleardevice();
            drawMonitor(*x, *y, width, height);
        }
    }
}


void cycle(){
      //White Background
      setcolor(WHITE);
      rectangle(100,50,500,450);
      setfillstyle(1,15);
      floodfill(161,51,WHITE);
      setcolor(0);
    
      circle(230,250,40);
      circle(350,250,40);
      circle(290,250,10);
      line(230,250,280,250);
      line(230,250,255,200);
      line(285,243,255,200);
      line(255,200,248,190);
      line(240,190,260,190);
      line(295,240,320,200);
      line(350,250,320,200);
      line(320,200,315,190);
      line(315,190,335,175);
  
  
}


int* drawLineAngle(int x, int y, int length, double angle) {
    // Convert angle to radians
    double radian = angle * (3.1416 / 180.0);
    
    // Calculate endpoint
    int* points = (int*)malloc(2 * sizeof(int)); 
    points[0] = x + length * cos(radian);
    points[1] = y - length * sin(radian); 

    // Draw the line
    line(x, y, points[0], points[1]);
    return points;  
}


void drawAeroplane(int x, int y) {
  
line(x,y,x+250,y);
line(x+30,y+100,x+310,y+100);
rectangle(x + 220, y + 30, x + 310, y + 60); 

int points2[] = {x+250, y, x+310, y+100, x+340, y};
setcolor(WHITE);
setfillstyle(SOLID_FILL, WHITE);
fillpoly(3,points2);
setcolor(BLACK);
line(x + 250, y, x + 310, y + 100);


  //backside
  int cx=x-80,cy=y-30;
  int points[] = {x,y,cx,cy};
  fillpoly(2,points);
  int points1[] = {x+30,y+100,cx,cy};
  fillpoly(2,points1);

   // Windows
   for (int i = 20; i <= 160; i += 30) {
    rectangle(x + i, y + 30, x + i + 20, y + 50);
}

    int* arr1 = drawLineAngle(x + 200, y + 90, 40, 250);
    int* arr2 = drawLineAngle(x + 130, y + 90, 70, 250);
    line(arr1[0], arr1[1], arr2[0], arr2[1]);
    line(x + 200, y + 90, x + 130, y + 90);

    free(arr1);
    free(arr2);

    // Drawing opposite wings
    int* arr3 = drawLineAngle(x + 200, y , 40, 110);
    int* arr4 = drawLineAngle(x + 130, y, 70, 110);
    line(arr3[0], arr3[1], arr4[0], arr4[1]);
    //line(x + 200, y + 10, x + 130, y + 10);

    free(arr3);
    free(arr4);
 
 
}


void moveAeroplane(int *x, int *y) {
    char ch;
    while (1) {
        if (kbhit()) {
            ch = getch();
            switch (ch) {
                case 'u': // Up
                    *y -= 10;
                    break;
                case 'd': // Down
                    *y += 10;
                    break;
                case 'l': // Left
                    *x -= 10;
                    break;
                case 'r': // Right
                    *x += 10;
                    break;
                case 27: // Escape key
                    return;
            }
            cleardevice();
            drawAeroplane(*x, *y);
        }
    }
}
    


void drawAngryFace(int x, int y, int radius) {
   
    // Face outline
    circle(x, y, radius);
    
    // Eye positions
    int eyeOffsetX = radius / 3;
    int eyeOffsetY = radius / 5;
    int eyeWidth = radius / 5;
    int eyeHeight = radius / 4;
    
    // Draw eyes
    ellipse(x - eyeOffsetX, y - eyeOffsetY, 0, 360, eyeWidth, eyeHeight);
    ellipse(x + eyeOffsetX, y - eyeOffsetY, 0, 360, eyeWidth, eyeHeight);
    
    // Pupils
    int pupilSize = radius / 10;
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(x - eyeOffsetX + 5, y - eyeOffsetY, pupilSize, pupilSize);
    fillellipse(x + eyeOffsetX - 5, y - eyeOffsetY, pupilSize, pupilSize);
    
    // Angry eyebrows
    int browOffsetY = eyeOffsetY + 10;
    line(x - eyeOffsetX - 10, y - browOffsetY, x - eyeOffsetX + 10, y - eyeOffsetY);
    line(x + eyeOffsetX + 10, y - browOffsetY, x + eyeOffsetX - 10, y - eyeOffsetY);
    
    // Frown (mouth)
    int mouthRadius = radius / 3;
    arc(x, y + radius / 4, 200, 340, mouthRadius);
}
int main() {
    int gd = DETECT, gm;
    int width = 640, height = 480;
    initwindow(width, height);  
    setbkcolor(WHITE);
    cleardevice();

    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    setlinestyle(SOLID_LINE, 0, 1);

    //shape1();
    //palestineFlag();
    //nationalFlag();
    //madrid_logo()  ;
    //shape3();
    int x = 300, y = 150;
    // drawSmiley(x, y, 100);
    // moveSmiley(&x, &y, 100);
    

    //wifi  
    // drawWiFi(250, 100);
    // movewifi(&x, &y);

    // drawMonitor(150, 150, 370, 250);
    // moveMonitor(&x, &y, 370, 250);
    
    //cycle();
    // drawAeroplane(100, 200);
    // moveAeroplane(&x, &y);
    // drawEmoji(300, 150, 100);
    // moveSmiley(&x,&y,100) ;
    drawAngryFace(300,200,80);
    
    getch();
    getchar();
    closegraph();
    return 0;
}


