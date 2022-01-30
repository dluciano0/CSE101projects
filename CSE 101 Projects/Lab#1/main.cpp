// Daniel Luciano CSE 110 - Lab #1
// This program computes gross receipts using tickets sold

#include <iostream>

using namespace std;

int main()
{
    int ticketsSold;
    double grossReceipts, profit;


    cout << "Enter the number of tickets sold: ";
    cin >> ticketsSold;

    grossReceipts = ticketsSold * 29.0;
    profit = grossReceipts - 1450;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Tickets sold = " << ticketsSold << endl;
    cout << "Gross receipts = $" << grossReceipts << endl;
    cout << "Event profit = $" << profit << endl;
}
