public class BresenhamAlgorithm {

    public static void drawLine(int x1, int y1, int x2, int y2) {
        int dx = x2 - x1;
        int dy = y2 - y1;
        int x=x1 ;
        int y=y1 ;
        int p=2*dy-dx; //initial decision parameter
        System.out.println("Raster location (x,y) : ");
        System.out.printf("(%d,%d)",x,y);

        while(x<x2){
            x++ ;
            if(p<0){
                p+=2*dy ; // move horizontally
            }else{
                y++ ; //move diagonally
                p+=2*dy-2*dx ;
            }
            System.out.printf("(%d,%d)",x,y);
        }

    }
    public static void main(String[] args) {


    }
}
