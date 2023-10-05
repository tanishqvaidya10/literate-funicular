#include <stdio.h>

// structure to represent point.
typedef struct {
    int x;
    int y;
} Point;

//functions to find Quadrant in which the points lie.
int FindQ(Point);
//two points are lying on same quadrant or not.
int SameQuadrants(Point,Point);

//define these 2 functions 
int FindQ(Point p){
    if (p.x > 0 && p.y > 0) //++
    {
        return 1;
    }
    else if (p.x < 0 && p.y > 0) //-+
    {
        return 2;
    }
    else if (p.x < 0 && p.y < 0) //--
    {
        return 3;
    }
    else if (p.x > 0 && p.y < 0) //+-
    {
        return 4;
    }
    else 
       return 0;  // means point is lying on axis

}

//Two Quadrants are on the same 
int SameQuadrants(Point p1,Point p2) {
    if (FindQ(p1) == FindQ(p2))
      return 1;
    return 0;
}

int main() {
    Point p1 = {1,1}, p2 = {-1,1}, p3 = {-1,-1}, p4 = {1,-1}, p5 = {0,5};
    printf("Point p1 lies in Quadrant %d\n",FindQ(p1));
    printf("Point p2 lies in Quadrant %d\n",FindQ(p2));
    printf("Point p3 lies in Quadrant %d\n",FindQ(p3));
    printf("Point p4 lies in Quadrant %d\n",FindQ(p4));
    printf("Point p5 lies in Quadrant %d\n",FindQ(p5));
}


