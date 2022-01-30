#include <iostream>
#include <string>
#include "string.h"

using namespace std;

int main()
{

    string userInput;
    char again = 'y';

    while(again == 'y' || again == 'Y')
    {
        userInput = "";
        get_input(userInput);
        inspect_input(userInput);
        cout << "\n\n\ Enter Y to run again: ";
        cin >> again;
        cin.ignore();
    }
    return 0;
}

//Engineer name: Daniel Luciano
//Program description: this program requests a string, inspects it, then displays all of it content.

//Test Case #1: This test utilizes the isdigit function to inspect if there are any digits within the string.
//Results: Upon completion of the inspection, it returned the amount of digits found inside the string.

//Test Case #2: This test utilizes the isupper function to inspect if there are any upper-case letters within the string.
//Results: Upon completion of the inspection, it returned the amount of upper-case letters found inside the string.

//Test Case #3: This test utilizes the islower function to inspect if there are any lower-case letters within the string.
//Results: Upon completion of the inspection, it returned the amount of lower-case letters found inside the string.

//Test Case #4: This test utilizes the isspace function to inspect if there are any white-spaces within the string.
//Results: Upon completion of the inspection, it returned the amount of spaces found inside the string.

//Test Case #5: This test utilizes the ispunct function to inspect if there are any special characters within the string. It also includes a word counter to find the number of words within the string.
//Results: Upon completion of the inspection, it returned the amount of special characters and words found inside the string.
