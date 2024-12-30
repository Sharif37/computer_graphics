public class MidPointCircle {

    // Function to draw a circle using the Mid-Point Algorithm
    public static void drawCircle(int xc, int yc, int r) {
        int x = 0;
        int y = r;
        int p = 1 - r; // Initial decision parameter

        System.out.println("Raster locations (x, y):");
        BresenhamCircleAlgorithm.plotCirclePoints(xc, yc, x, y);

        while (x < y) {
            x++;
            if (p < 0) {
                p += 2 * x + 3; // Move horizontally
            } else {
                y--;
                p += 2 * x - 2 * y + 1; // Move diagonally
            }
            BresenhamCircleAlgorithm.plotCirclePoints(xc, yc, x, y);
        }
    }

    public static void main(String[] args) {
        // Example: Draw a circle with center (0, 0) and radius 5
        int xc = 0, yc = 0, radius = 10;
        drawCircle(xc, yc, radius);
    }
}
