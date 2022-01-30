// Daniel Luciano CSE 110 - Lab #2
// This program determines the floor and balcony seats sold and gross receipts
#include <iostream>

using namespace std;

int main()
// - Get input of seats sold
// - Process
//      1) Compute floor and balcony seats sold
//      2) Compute receipts for each
//      3) Compute gross receipts
//      4) Compute profit
// - Output the values computed with titles
{
    int ticketsSold, floorTickets, balconyTickets;
    double floorReceipts, balconyReceipts, grossReceipts, profit;

    cout << "Enter the number of tickets sold: ";
    cin >> ticketsSold;

    if (ticketsSold > 200)
    {
        floorTickets = 200;
        floorReceipts = floorTickets * 29.00;
        balconyTickets = ticketsSold - 200;
        balconyReceipts = balconyTickets * 19.00;
    }
   else
   {
       floorTickets = ticketsSold;
       floorReceipts = floorTickets * 29;
       balconyTickets = 0;
       balconyReceipts = 0;
   }

   grossReceipts = floorReceipts + balconyReceipts;
   profit = grossReceipts - 1450;

   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   cout << "Total tickets sold = " << ticketsSold << endl;
   cout << "Floor tickets sold = " << floorTickets << endl;
   cout << "Floor ticket receipts = $" << floorReceipts << endl;
   cout << "Balcony tickets sold = " << balconyTickets << endl;
   cout << "Balcony ticket receipts = $" << balconyReceipts << endl;
   cout << "Gross Receipts = $" << grossReceipts << endl;
   cout << "Profit = $" << profit << endl;
}
