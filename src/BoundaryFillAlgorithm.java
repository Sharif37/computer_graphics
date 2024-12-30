import java.awt.Color;
import java.awt.Graphics;
import java.util.Stack;
import javax.swing.JFrame;

public class BoundaryFillAlgorithm extends JFrame {
    private int[][] image; // A 2D array to represent pixels
    private int width = 400;
    private int height = 400;

    public BoundaryFillAlgorithm() {
        image = new int[width][height];
        setTitle("Boundary Fill Algorithm");
        setSize(width, height);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    // Iterative Boundary Fill Algorithm (4-connected)
    public void boundaryFill(int startX, int startY, int fillColor, int boundaryColor) {
        // Stack to store the pixels to be processed
        Stack<int[]> stack = new Stack<>();
        stack.push(new int[]{startX, startY});

        // Iterate while there are pixels to process
        while (!stack.isEmpty()) {
            int[] currentPixel = stack.pop();
            int x = currentPixel[0];
            int y = currentPixel[1];

            // Check if the current pixel is within bounds
            if (x < 0 || x >= width || y < 0 || y >= height)
                continue;

            // Check if the current pixel is not the boundary or fill color
            if (image[x][y] != boundaryColor && image[x][y] != fillColor) {
                // Fill the pixel with the fill color
                image[x][y] = fillColor;

                // Push neighboring pixels (4-connected) to the stack
                stack.push(new int[]{x + 1, y}); // Right
                stack.push(new int[]{x - 1, y}); // Left
                stack.push(new int[]{x, y + 1}); // Down
                stack.push(new int[]{x, y - 1}); // Up
            }
        }
    }

    // Method to render the image
    @Override
    public void paint(Graphics g) {
        super.paint(g);

        // Draw the initial boundary and filled area
        for (int x = 50; x <= 350; x++) {
            for (int y = 50; y <= 350; y++) {
                if (x == 50 || x == 350 || y == 50 || y == 350) {
                    image[x][y] = Color.RED.getRGB(); // Boundary color
                } else {
                    image[x][y] = Color.WHITE.getRGB(); // Fill color (initially white)
                }
            }
        }

        // Call boundary fill from an initial point (inside the boundary)
        boundaryFill(150, 150, Color.GREEN.getRGB(), Color.RED.getRGB());

        // Draw the filled image on the JFrame
        for (int x = 0; x < width; x++) {
            for (int y = 0; y < height; y++) {
                g.setColor(new Color(image[x][y]));
                g.fillRect(x, y, 1, 1);
            }
        }
    }

    public static void main(String[] args) {
        // Create an instance of the BoundaryFillAlgorithm class
        BoundaryFillAlgorithm frame = new BoundaryFillAlgorithm();
        frame.setVisible(true);
    }
}
