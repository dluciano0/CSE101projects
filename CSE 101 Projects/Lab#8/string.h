#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

void get_input(string& userInput)
{
    cout << "Enter a word or phrase for inspection: ";
    getline(cin, userInput);

    cout <<"\t\The word content is:" << endl << endl;
}

void inspect_input(string userInput)
{
    int spaces = 0;
    int uppers = 0;
    int lowers = 0;
    int digits = 0;
    int characters = 0;
    int words = 1;

    int strLength = userInput.length();

    for(int i = 0; i < strLength; i++)
    {
        if(isdigit(userInput[i]))
            digits++;
        if(isupper(userInput[i]))
            uppers++;
        if(islower(userInput[i]))
            lowers++;
        if(isspace(userInput[i]))
            spaces++;
        if(ispunct(userInput[i]))
        {
            characters++;
            words++;
        }
    }
        cout << "\t" << words << " Word(s)." << endl;
        cout << "\t" << digits << " Digit(s)." << endl;
        cout << "\t" << uppers << " Upper case letter(s)." << endl;
        cout << "\t" << lowers << " Lower case letter(s)." << endl;
        cout << "\t" << spaces << " Space(s)." << endl;
        cout << "\t" << characters << " Other character(s)." << endl;
}

#endif // STRING_H_INCLUDED
