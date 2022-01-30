#include <iostream>

using namespace std;

int main()
{
    const int neega = 5;
    int beech[neega];

    cout << "please enter 5 numbers.";

    for(int i = 0; i < neega; i++)
    {
        cin >> beech[i];
    }

    cout << beech;


    return 0;
}
