import java.awt.Color;
import java.awt.Graphics;
import java.util.Stack;
import javax.swing.JFrame;

public class FloodFillAlgorithm extends JFrame {
    private int[][] image; // A 2D array to represent pixels
    private int width = 400;
    private int height = 400;

    public FloodFillAlgorithm() {
        image = new int[width][height];
        setTitle("Flood Fill Algorithm");
        setSize(width, height);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    // Iterative Flood Fill Algorithm (4-connected)
    public void floodFill(int startX, int startY, int fillColor) {
        // Get the initial color of the start pixel
        int targetColor = image[startX][startY];

        // Stack to store the pixels to be processed
        Stack<int[]> stack = new Stack<>();
        stack.push(new int[]{startX, startY});

        // Iterate while there are pixels to process
        while (!stack.isEmpty()) {
            int[] currentPixel = stack.pop();
            int x = currentPixel[0];
            int y = currentPixel[1];

            // Check if the current pixel is within bounds and if it's not already the fill color
            if (x < 0 || x >= width || y < 0 || y >= height || image[x][y] != targetColor) {
                continue;
            }

            // Fill the pixel with the fill color
            image[x][y] = fillColor;

            // Push neighboring pixels (4-connected) to the stack
            stack.push(new int[]{x + 1, y}); // Right
            stack.push(new int[]{x - 1, y}); // Left
            stack.push(new int[]{x, y + 1}); // Down
            stack.push(new int[]{x, y - 1}); // Up
        }
    }

    // Method to render the image
    @Override
    public void paint(Graphics g) {
        super.paint(g);

        // Draw the initial image with some predefined area
        for (int x = 50; x < 350; x++) {
            for (int y = 50; y < 350; y++) {
                if (x > 100 && x < 300 && y > 100 && y < 300) {
                    image[x][y] = Color.BLUE.getRGB(); // Initial color to flood (target color)
                } else {
                    image[x][y] = Color.WHITE.getRGB(); // Boundary or filled area
                }
            }
        }

        // Call flood fill from an initial point (inside the area)
        floodFill(150, 150, Color.GREEN.getRGB());

        // Draw the filled image on the JFrame
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                g.setColor(new Color(image[x][y]));
                g.fillRect(x, y, 1, 1);
            }
        }
    }

    public static void main(String[] args) {
        // Create an instance of the FloodFillAlgorithm class
        FloodFillAlgorithm frame = new FloodFillAlgorithm();
        frame.setVisible(true);
    }
}
