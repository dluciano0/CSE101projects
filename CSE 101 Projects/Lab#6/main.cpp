// CSE 110 - Lab 6 Daniel Luciano
// This program computes the monthly payment, interest paid, and total pay back amount of a car loan.
#include <iostream>
#include <iomanip>
#include "loan.h"
#include <windows.h>


using namespace std;


int main()
{
    double loan, interestRate, mp, payBack, totalInterest;
    int duration;
    char runAgain = 'Y';

    while(runAgain == 'Y' || runAgain == 'y')
    {
        system("CLS");

        print_banner();

        get_input(loan, interestRate, duration);

        mp = compute_payment(loan, interestRate, duration);

        compute_totals(payBack, loan, mp, totalInterest, duration);

        display_output(payBack, mp, totalInterest);

        cout << endl << "\t\t\t\t\ Enter Y to run again: ";
        cin >> runAgain;
    }

    return 0;
}
