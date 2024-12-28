//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        System.out.println("DDA Algorithm: ");
        System.out.println("Line from (2, 2) to (8, 5):");
        DDAAlgorithm.drawLine(1,1,8,5);


        System.out.println("Bresenham Algorithm: ");
        System.out.println("Line from (2, 2) to (8, 5):");
        BresenhamAlgorithm.drawLine(1,1,8,5);


        }

}