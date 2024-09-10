#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Function prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Helper function to calculate distance between two points
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //the distance formula for two points
}

//Helper function to print the points in the other functions
void printPoints(double x1, double y1, double x2, double y2){
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
}

// Main function
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}

// Distance function
double calculateDistance() {
    double x1, x2, y1, y2;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    double dist = distance(x1, y1, x2, y2);

    printPoints(x1, y1, x2, y2);
    printf("The distance between the two points is %.2f\n", dist);

    return dist;
}

// Function to calculate and print perimeter
double calculatePerimeter() {
    double x1, x2, y1, y2;


    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    double width = fabs(x2 - x1);
    double height = fabs(y2 - y1);

    double perimeter = 2 * (width + height);

    printPoints(x1, y1, x2, y2);
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    return 3.5;
}

// Function to calculate and print area
double calculateArea() {
    double x1, x2, y1, y2;


    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    double width = fabs(x2 - x1);
    double height = fabs(y2 - y1);

    double area = width * height;

    printPoints(x1, y1, x2, y2);
    printf("The area of the city encompassed by your request is %.2f\n", area);

    return 3.0;
}

// Function to calculate and print width
double calculateWidth() {
    double x1, x2, y1, y2;


    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    double width = fabs(x2 - x1);

    printPoints(x1, y1, x2, y2);
    printf("The width of the city encompassed by your request is %.2f\n", width);

    return 2.5;
}

// Function to calculate and print height
double calculateHeight() {
    double x1, x2, y1, y2;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    double height = fabs(y2 - y1);

    printPoints(x1, y1, x2, y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);

    return 2.5;
}
