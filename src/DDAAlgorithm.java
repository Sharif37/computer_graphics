public class DDAAlgorithm {

    public static void drawLine(int x1, int y1, int x2, int y2) {
        // Calculate dx and dy
        int dx = x2 - x1;
        int dy = y2 - y1;

        // Calculate the slope
        float m = (float) dy / dx;

        // Print the initial point
        System.out.println("Raster locations (x, y):");

        // Case 1: |m| ≤ 1 (Shallow Slope)
        if (m <= 1) {
            float y = y1; // Start with the initial y
            for (int x = x1; x <= x2; x++) {
                System.out.printf("(%d, %d)", x, Math.round(y));
                y += m; // Increment y using the slope
            }
            System.out.println();
        }
        // Case 2: |m| > 1 (Steep Slope)
        else {
            float x = x1; // Start with the initial x
            for (int y = y1; y <= y2; y++) {
                System.out.printf("(%d, %d)", Math.round(x), y);
                x += 1 / m; // Increment x using the inverse slope
            }
            System.out.println();
        }
    }


}
