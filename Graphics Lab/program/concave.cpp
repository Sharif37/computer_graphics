#include <iostream>
#include <vector>

using namespace std;

struct Point {
    int x, y;
};

// Function to compute the cross product of vectors AB and BC
int crossProduct(Point A, Point B, Point C) {
    int cross = (B.x - A.x) * (C.y - B.y) - (B.y - A.y) * (C.x - B.x);
    return cross;
}

// Function to determine if the polygon is convex or concave
bool isConvex(vector<Point> &polygon) {
    int n = polygon.size();
    if (n < 3) return false;  // Not a valid polygon

    int prevSign = 0;

    for (int i = 0; i < n; i++) {
        Point A = polygon[i];
        Point B = polygon[(i + 1) % n];
        Point C = polygon[(i + 2) % n];

        int cross = crossProduct(A, B, C);
        int sign = (cross > 0) ? 1 : (cross < 0) ? -1 : 0;

        if (sign != 0) {
            if (prevSign == 0) 
                prevSign = sign;
            else if (prevSign != sign) 
                return false; // Mixed signs indicate a concave polygon
        }
    }

    return true; // If all signs are the same, it's convex
}

int main() {
    int n;
    cout << "Enter number of vertices: ";
    cin >> n;

    vector<Point> polygon(n);
    cout << "Enter vertices (x y) one by one:\n";
    for (int i = 0; i < n; i++) {
        cin >> polygon[i].x >> polygon[i].y;
    }

    if (isConvex(polygon))
        cout << "The polygon is CONVEX.\n";
    else
        cout << "The polygon is CONCAVE.\n";

    return 0;
}