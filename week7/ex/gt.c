#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;

// Function prototypes
float distance(Point p1, Point p2);
int collinear(Point p1, Point p2, Point p3);

// calculate distance
float distance(Point p1, Point p2) {
    float dsq = (p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y);
    return sqrt(dsq);
}

// three given points are collinear or not.
int collinear(Point p1, Point p2, Point p3) {
    if (p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y) == 0)
        return 1;
    return 0;
}

int main() {
    Point p1 = {0, 0}, p2 = {5, 5}, p3 = {10, 10}, p4 = {5, 0};
    printf("distance between p1 and p3 = %f\n", distance(p1, p3));
    printf("\n are points p1 , p2 , p3 collinear : %d\n", collinear(p1, p2, p3));
    printf("\n are points p1 , p2 , p4 collinear : %d\n", collinear(p1, p2, p4));
}


