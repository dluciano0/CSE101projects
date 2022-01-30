#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include <iostream>
#include <cmath>

using namespace std;

double get_area(double length, double width)
{
    double a = length * width;
    return a;
}

double get_perimeter(double length, double width)
{
    double p = (length * 2) + (width * 2);
    return p;
}

double get_diagonal(double length, double width)
{
    double d = pow(length, 2) + pow(width, 2);
    d = sqrt(d);
    return d;
}

void display_output(double a, double p, double d)
{
    cout << "The area of the rectangle is: " << a << endl;
    cout << "The perimeter of the rectangle is: " << p << endl;
    cout << "The diagonal of the rectangle is: " << d << endl;
}


#endif // RECTANGLE_H_INCLUDED
