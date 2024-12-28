public class BresenhamCircleAlgorithm {

    public static void plotCirclePoints(int xc, int yc, int x, int y) {
        System.out.printf("(%d, %d),", xc + x, yc + y);
        System.out.printf("(%d, %d),", xc - x, yc + y);
        System.out.printf("(%d, %d),", xc + x, yc - y);
        System.out.printf("(%d, %d),", xc - x, yc - y);
        System.out.printf("(%d, %d),", xc + y, yc + x);
        System.out.printf("(%d, %d),", xc - y, yc + x);
        System.out.printf("(%d, %d),", xc + y, yc - x);
        System.out.printf("(%d, %d),", xc - y, yc - x);
    }


    public static void drawCircle(int xc, int yc, int radius) {
        int x=0 ,y=radius;
        int d=3-2*radius;
        System.out.println("Raster location of Circle: ");
        plotCirclePoints(xc,yc,x,y);
        while(x<=y){
            x++ ;
            if(d<0){
                d+=4*x+6 ;
            }else {
                d+=4*(x-y)+10 ;
                y-- ;

            }
            plotCirclePoints(xc, yc, x, y);

        }
    }
}
