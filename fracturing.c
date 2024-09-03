//********************************************************
// fracturing.c
// Author: Agustin Marmor
// UCFID: 5612822
// Date: 8/27/2024
// Class: COP 3223, Professor Parra
// Purpose: This program uses multiple functions to calculate
// different mathematical operations. Including: width, height,
// distance, area, and perimeter.
// Input: None
//
// Output: The program will output the distance between two points,
// the perimeter of a city, the area of a city, the width of a city, and the height of a city.
// based on the user's input.
// //********************************************************

#include <math.h>
#include <stdio.h>
#define PI 3.14159

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
} // main

//********************************************************
// double calculateDistance ()
//
// Purpose:             Calculates the distance between two points.
// Input:               The x and y coordinates of two points.
// Output:              Prints the points entered and the distance between two points.
// Return:              The distance between two points.
//********************************************************

double calculateDistance()
{
    double x1, y1, x2, y2;
    double distance;

    printf("Enter the x coordinate of the first point: ");
    scanf("%lf", &x1);

    printf("Enter the x coordinate of the second point: ");
    scanf("%lf", &x2);

    printf("Enter the y coordinate of the first point: ");
    scanf("%lf", &y1);

    printf("Enter the y coordinate of the second point: ");
    scanf("%lf", &y2);

    // Calculate the distance between two points

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Point 1 enterd: x1 = %.3lf, y1 = %.3lf\n", x1, y1);
    printf("Point 2 enterd: x2 = %.3lf, y2 = %.3lf\n", x2, y2);
    printf("The distance between the two points is %.3lf\n", distance);

    return distance;
} // calculateDistance

//********************************************************
// double calculatePerimeter ()
//
// Purpose:             Calculates the perimeter based on two points.
// Input:               The x and y coordinates of two points.
// Output:              Prints the points entered and the perimeter of the city encompassed.
// Return:              How difficult I found the function to write on a scale of 1-5.
//********************************************************

double calculatePerimeter()
{
    double radius;
    double perimeter;
    double distance = calculateDistance();

    // Radius is half the distance between two points

    radius = distance / 2;

    // Calculate the perimeter of the city by using the formula for the circumference of a circle

    perimeter = 2 * PI * radius;

    printf("The perimeter of the city encompassed by your request is %.3lf\n", perimeter);

    return 3.5;
} // calculatePerimeter

//********************************************************
// double calculateArea ()
//
// Purpose:         Calculates the area of a city.
// Input:           The x and y coordinates of two points.
// Output:          Prints the points entered and the area of the city.
// Return:          How difficult I found the function to write on a scale of 1-5.
//********************************************************

double calculateArea()
{
    double radius;
    double area;
    double distance = calculateDistance();

    radius = distance / 2;

    // Calculate the area of the city by using the formula for the area of a circle

    area = PI * pow(radius, 2);

    printf("The area of the city encompassed by your request is %.3lf\n", area);

    return 3.75;
} // calculateArea

//********************************************************
// double calculateWidth ()
//
// Purpose:             Calculate the width of a city.
// Input:               The x and y coordinates of two points.
// Output:              Prints the points entered and the width of the city encompassed.
// Return:              How difficult I found the function to write on a scale of 1-5.
//********************************************************

double calculateWidth()
{
    double radius;
    double width;
    double distance = calculateDistance();

    radius = distance / 2;

    // Calculate the width of the city by using the formula for the diameter of a circle

    width = 2 * radius;

    printf("The width of the city encompassed by your request is %.3lf\n", width);

    return 2.0;
} // calculateWidth

//********************************************************
// double calculateHeight ()
//

// Purpose:             Calculate the height of a city.
// Input:               The x and y coordinates of two points.
// Output:              Prints the points entered and the height of the city encompassed.
// Return:              How difficult I found the function to write on a scale of 1-5.
//********************************************************

double calculateHeight()
{
    double radius;
    double height;
    double distance = calculateDistance();

    radius = distance / 2;

    // Since the radius of a circle indicates the distance between the center point to any direction, the height is equal to the radius

    height = radius;

    printf("The height of the city encompassed by your request is %.3lf\n", height);

    return 1.0;
} // calculateHeight
