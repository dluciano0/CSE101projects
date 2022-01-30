//Daniel Luciano CSE 110 - Lab #5
//This program computes the area, perimeter, and diagonal of a rectangle.
#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

void display_output();

int main()
{
    double sideLength1, sideLength2, area, perimeter, diagonal;

    cout << "Enter the length of side one: ";
    cin >> sideLength1;

    cout << "Enter the length of side two: ";
    cin >> sideLength2; cout << '\n';

    if (sideLength1 <= 0 || sideLength2 <= 0)
        cout << "That is not a valid side length. " << endl;
    else
    {
        area = get_area(sideLength1, sideLength2);
        perimeter = get_perimeter(sideLength1, sideLength2);
        diagonal = get_diagonal(sideLength1, sideLength2);
        display_output(area, perimeter, diagonal);

    }

    cout << fixed << setprecision(2);



    return 0;

}
