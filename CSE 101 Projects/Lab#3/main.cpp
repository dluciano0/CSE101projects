// Daniel Luciano CSE 110 - Lab #3
// This program determines the front floor, back floor, and balcony seats sold and gross receipts

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int totalTicketsSold, frontFloorTickets, backFloorTickets, balconyTickets;
    double frontFloorReceipts, backFloorReceipts, balconyReceipts, grossReceipts, profit;

    cout << "Enter the number of tickets sold: ";
    cin >> totalTicketsSold;

    if (totalTicketsSold > 200)
    {
        balconyTickets = totalTicketsSold - 200;
        balconyReceipts = balconyTickets * 19;
        backFloorTickets = 100;
        backFloorReceipts = 100 * 23;
        frontFloorTickets = 100;
        frontFloorReceipts = 100 * 29;
    }
    else if (totalTicketsSold > 100)
    {
        balconyTickets = 0;
        balconyReceipts = 0;
        backFloorTickets = totalTicketsSold - 100;
        backFloorReceipts = backFloorTickets * 23;
        frontFloorTickets = 100;
        frontFloorReceipts = 100 * 29;
    }
    else
    {
        balconyTickets = 0;
        balconyReceipts = 0;
        backFloorTickets = 0;
        backFloorReceipts = 0;
        frontFloorTickets = totalTicketsSold;
        frontFloorReceipts = totalTicketsSold * 29;
    }

    grossReceipts = frontFloorReceipts + backFloorReceipts + balconyReceipts;
    profit = grossReceipts - 1450;

    cout << fixed << setprecision(2);

    cout << "Total tickets sold = " << totalTicketsSold << endl;
    cout << "Front floor tickets sold = " << frontFloorTickets << endl;
    cout << "Front floor ticket receipts = $" << frontFloorReceipts << endl << endl;
    cout << "Back floor tickets sold = " << backFloorTickets << endl;
    cout << "Back floor ticket receipts = $" << backFloorReceipts << endl << endl;
    cout << "Balcony tickets sold = " << balconyTickets << endl;
    cout << "Balcony ticket receipts = $" << balconyReceipts << endl << endl;

    cout << "Gross Receipts = $" << grossReceipts << endl;
    cout << "Profit = $" << profit << endl;
}
