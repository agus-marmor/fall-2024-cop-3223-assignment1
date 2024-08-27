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

double calculate_distance();
double calculate_perimeter();
double calculate_area();
double calculate_width();
double calculate_height();

int main(int argc, char **argv)
{
    int choice;
    
    scanf("%d", &choice);




    
    return 1;
} // main

//********************************************************
// double calculate_distance ()
//
// Purpose:             Calculates the distance between two points.
// Input:               The x and y coordinates of two points.
// Output:              Prints the points entered and the distance between two points.
// Return:              The distance between two points.
//********************************************************

double calculate_distance()
{
    double x1, y1, x2, y2;
    double distance;

    printf("Enter the x and y coordinates of the first point: ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the x and y coordinates of the second point: ");
    scanf("%lf %lf", &x2, &y2);

    // Calculate the distance between two points

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Point 1 enterd: x1 = %.2lf, y1 = %.2lf\n", x1, y1);
    printf("Point 2 enterd: x2 = %.2lf, y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);

    return distance;
} // calculate_distance

//********************************************************
// double calculate_perimeter ()
//
// Purpose:             Calculates the perimeter based on two points.
// Input:               The x and y coordinates of two points.
// Output:              Prints the points entered and the perimeter of the city encompassed.
// Return:              How difficult I found the function to write on a scale of 1-5.
//********************************************************

double calculate_perimeter()
{
    double radius;
    double perimeter;
    double distance = calculate_distance();

    // Radius is half the distance between two points

    radius = distance / 2;

    // Calculate the perimeter of the city by using the formula for the circumference of a circle

    perimeter = 2 * PI * radius;

    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    return 3.5;
} // calculate_perimeter

//********************************************************
// double calculate_area ()
//
// Purpose:         Calculates the area of a city.
// Input:           The x and y coordinates of two points.
// Output:          Prints the points entered and the area of the city.
// Return:          How difficult I found the function to write on a scale of 1-5.
//********************************************************

double calculate_area()
{
    double radius;
    double area;
    double distance = calculate_distance();

    radius = distance / 2;

    // Calculate the area of the city by using the formula for the area of a circle

    area = PI * pow(radius, 2);

    printf("The area of the city encompassed by your request is %.2lf\n", area);

    return 3.75;
} // calculate_area

//********************************************************
// double calculate_width ()
//
// Purpose:             Calculate the width of a city.
// Input:               The x and y coordinates of two points.
// Output:              Prints the points entered and the width of the city encompassed.
// Return:              How difficult I found the function to write on a scale of 1-5.
//********************************************************

double calculate_width()
{
    double radius;
    double width;
    double distance = calculate_distance();

    radius = distance / 2;

    // Calculate the width of the city by using the formula for the diameter of a circle

    width = 2 * radius;

    printf("The width of the city encompassed by your request is %.2lf\n", width);

    return 2.0;
} // calculate_width

//********************************************************
// double calculate_height ()
//

// Purpose:             Calculate the height of a city.
// Input:               The x and y coordinates of two points.
// Output:              Prints the points entered and the height of the city encompassed.
// Return:              How difficult I found the function to write on a scale of 1-5.
//********************************************************

double calculate_height()
{
    double radius;
    double height;
    double distance = calculate_distance();

    radius = distance / 2;

    // Since the radius of a circle indicates the distance between the center point to any direction, the height is equal to the radius

    height = radius;

    printf("The height of the city encompassed by your request is %.2lf\n", height);

    return 1.0;
} // calculate_height
