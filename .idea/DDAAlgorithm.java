public class DDAAlgorithm {

    // Function to calculate and print the points using DDA Algorithm
    public static void drawLine(int x1, int y1, int x2, int y2) {
        // Calculate dx and dy
        int dx = x2 - x1;
        int dy = y2 - y1;

        // Calculate the number of steps required for generating pixels
        int steps = Math.max(Math.abs(dx), Math.abs(dy));

        // Calculate the increment in x & y for each step
        float xIncrement = dx / (float) steps;
        float yIncrement = dy / (float) steps;

        // Initialize the starting point
        float x = x1;
        float y = y1;

        // Print the initial point
        System.out.println("Raster locations (x, y):");
        System.out.printf("(%d, %d)\n", Math.round(x), Math.round(y));

        // Calculate and print all the points for the line
        for (int i = 0; i < steps; i++) {
            x += xIncrement;
            y += yIncrement;
            System.out.printf("(%d, %d)\n", Math.round(x), Math.round(y));
        }
    }

    public static void main(String[] args) {
        // Example usage
        int x1 = 2, y1 = 3;
        int x2 = 10, y2 = 7;

        drawLine(x1, y1, x2, y2);
    }
}
