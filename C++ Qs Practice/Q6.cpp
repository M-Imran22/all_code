// Print all numbers from 1 to N
// Input a number N and print all numbers from 1 to N.

#include <iostream>

using namespace std;

int main()
{

    int x;
    cout << "Enter a number to show all numbers form 1 to that number ";
    cin >> x;

    for (int i = 1; i < x; i++)
    {
        cout << i << " " << i + 1 << endl;
    }

    return 0;
}