#include<stdio.h>
#include<math.h>
struct Line{
    struct Point{
        float x, y;
    }point1, point2;
    float *midpoint;
    float slope, distance;
};

void solveSlope(struct Line *line){
    //the equation of the slope is 
    //(y2-y1)/(x2-x1)
    line->slope = (line->point2.y - line->point1.y)/(line->point2.x - line->point1.x);
}

void solveMidpoint(struct Line *line){
    float x = (line->point2.x + line->point1.x) / 2;
    float y = (line->point2.y + line->point1.y) / 2;
    line->midpoint[0] = x;
    line->midpoint[1] = y;
}

void solveDistance(struct Line *line){
    //the pythagorean theorem to get the distance between 2 points when there are x and y coordinates
    line->distance = (float) sqrt(pow(line->point2.x - line->point1.x, 2) + pow(line->point2.y - line->point1.y, 2));
}

void getSlopeInterceptForm(struct Line *line){
    float y = line->point2.y;
    float x = line->point2.x;
    //using the equation y = mx + b, b is equal to y - mx
    //by using the coordinates of any of the two points and
    //substituting it to the equation, given the slope the y-intercept can be solved
    float b = y - line->slope*x;
    printf("y = mx + (%f)\n", b);
}

int main(){
    struct Line line; //the line variable will be used to for the different properties of a line
    printf("Enter x and y for point1: ");
    scanf(" %f %f", &line.point1.x, &line.point1.y);
    printf("Enter x and y for point2: ");
    scanf(" %f %f", &line.point2.x, &line.point2.y);
    solveSlope(&line);
    solveMidpoint(&line);
    solveDistance(&line);
    printf("Slope: %f\nMidpoint: %f %f\nDistance between 2 points: %f\n", line.slope, line.midpoint[0], line.midpoint[1], line.distance);
    getSlopeInterceptForm(&line);
}