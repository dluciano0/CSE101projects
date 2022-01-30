#ifndef LOAN_H_INCLUDED
#define LOAN_H_INCLUDED

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


void print_banner()
{
    std :: cout << std :: right << std :: setw(20) << "                                    xxx This program computes car loan information. xxx" << endl;
    std :: cout << std :: right << std :: setw(20) << "                                xxx Enter the loan amount, interest rate, and duration, xxx" << endl << endl;

}

void get_input(double& loan, double& interestRate, int& duration)
{
    cout << "\t\t\t\ Amount of Loan \t\t\t\ ";
    cin >> loan;

    while(loan <= 0 || loan > 120000)
    {
        cout << "\t\t\t\ Invalid loan amount" << endl;
        cout << "\t\t\t\ Amount of Loan \t\t\t\ ";
        cin >> loan;
    }

    cout << "\t\t\t\ Interest Rate (4 for 4%) \t\t\ ";
    cin >> interestRate;

    while(interestRate < 0 || interestRate > 12 )
    {
        cout << "\t\t\t\ Invalid interest rate" << endl;
        cout << "\t\t\t\ Interest Rate (4 for 4%) \t\t\ ";
        cin >> interestRate;
    }

    cout << "\t\t\t\ Duration of the loan (months) \t\t\ ";
    cin >> duration;

    while(duration <= 0 || duration > 72)
    {
        cout << "\t\t\t\ Invalid duration" << endl;
        cout << "\t\t\t\ Duration of the loan (months) \t\t\ ";
        cin >> duration;

    }
}

double compute_payment(double loan,double interestRate,int duration)
{
    double mp = 0, mRate = 0;

    mRate = (0.01 * interestRate)/12;
    duration = duration * -1;
    mp = loan * (mRate/(1 - (pow((1 + mRate),duration))));
    return mp;
}

void compute_totals(double& payBack, double loan, double mp, double& totalInterest, int duration)
{
    payBack = mp * duration;
    totalInterest = payBack - loan;
}

void display_output(double payBack, double mp, double totalInterest)
{
    cout << fixed << setprecision(2);
    cout << endl << "\t\t\t\ Monthly payment: \t\t\$" << mp << endl;
    cout << "\t\t\t\ Total payback amount: \t\t\$" << payBack << endl;
    cout << "\t\t\t\ Total interest paid: \t\t\$" << totalInterest << endl;
}




#endif // LOAN_H_INCLUDED
