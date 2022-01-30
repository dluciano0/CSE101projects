#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

void open_files(ifstream& in_stream, ofstream& out_stream)
{
    in_stream.open("salesAmounts.txt");

    if (in_stream.fail())
    {
        cout << "Input file opening failed. \n";
        exit(1);
    }

    out_stream.open("danielluciano.txt");

    if (out_stream.fail())
    {
        cout << "Output file opening failed. \n";
        exit(1);
    }
}

void fill_array(ifstream& in_stream, double salesArray[], int NUM_VALUES)
{
    while(!in_stream.eof())
    {
        for (int index = 0; index < NUM_VALUES; index++)
            in_stream >> salesArray[index];
    }

}

void sort_array(double salesArray[], int NUM_VALUES)
{
    for (int i = NUM_VALUES-1; i > 0; i--)
        for(int j = 0; j < i; j++)
            if (salesArray[j] > salesArray [j+1])
            {
                double temp = salesArray[j+1];
                salesArray[j+1] = salesArray[j];
                salesArray[j] = temp;
            }
}

void output_sales_data(ofstream& out_stream, double salesArray[], int NUM_VALUES)
{
    int index = 0;
    double total = 0;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << endl << "\t\t\Lab #7 - Daniel Luciano " << endl << endl;

    cout << "\t\t\The number Of sales amounts in the file is: " << NUM_VALUES << endl;
    cout << "\t\t\The lowest sales amount is: $" << salesArray[0] << endl;
    cout << "\t\t\The highest sales amount is: $" << salesArray[NUM_VALUES - 1] << endl;
    cout << "\t\t\Here are the sales amounts sorted from lowest to highest: " << endl << endl;

    while (index < NUM_VALUES)
    {
        cout << "\t\t\t\$" << std::right << setw(6) << salesArray[index] << endl;
        total = total + salesArray[index];
        index++;
    }

    cout << "\t\t\       ---------" << endl;
    cout << "\t\t\        $" << std::right << setw(6) << total << endl;


    index = 0;
    total = 0;

    out_stream.setf(ios::fixed);
    out_stream.setf(ios::showpoint);
    out_stream.precision(2);

    out_stream << endl << "\t\t\  Lab #7 - Daniel Luciano " << endl << endl;

    out_stream << "\t\t\  The number Of sales amounts in the file is: " << NUM_VALUES << endl;
    out_stream << "\t\t\  The lowest sales amount is: $" << salesArray[0] << endl;
    out_stream << "\t\t\  The highest sales amount is: $" << salesArray[NUM_VALUES - 1] << endl;
    out_stream << "\t\t\  Here are the sales amounts sorted from lowest to highest: " << endl << endl;

    while (index < NUM_VALUES)
    {
        out_stream << "\t\t\t\$" << std::right << setw(6) << salesArray[index] << endl;
        total = total + salesArray[index];
        index++;
    }

    out_stream << "\t\t\       -------------------" << endl;
    out_stream << "\t\t\               $" << std::right << setw(6) << total << endl;
}

#endif // ARRAY_H_INCLUDED
