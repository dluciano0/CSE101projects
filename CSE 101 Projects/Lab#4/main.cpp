//Daniel Luciano CSE 110 - Lab #4
//This program simulates stretching a cable by one pound continuously until its breaking point.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double cableLength, cableThickness, breakingPoint, tension;

    cout << "Enter the length of the cable in feet: ";
    cin >> cableLength;

    while (cableLength <= 0)
    {
        cout << "That input is invalid" << endl << endl;
        cout << "Enter the length of the cable in feet: ";
        cin >> cableLength;
    }

    cout << "Enter the thickness of the cable up to 2.5 inches: ";
    cin >> cableThickness;

    while ((cableThickness <= 0 ) || (cableThickness > 2.5))
    {
        cout << "That input is invalid" << endl << endl;
        cout << "Enter the thickness of the cable in inches: ";
        cin >> cableThickness;
    }

    breakingPoint = cableLength * 1.12;

    cout << fixed << setprecision(2);

    while(cableLength < breakingPoint)
    {
        tension++;
        cableLength = cableLength + (cableThickness * .28);
        cout << "The tension on the cable is: " << tension; cout << " lbs" << endl;
        cout << "The length of the cable is: " << cableLength; cout << " feet" << endl << endl;
    }

    cout << "The cable has broken." << endl << endl;
    cout << "Daniel Luciano - Lab 4" << endl << endl;


}
