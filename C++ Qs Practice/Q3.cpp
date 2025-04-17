// Check if a number is even or odd
// Write a program to check if a given number is even or odd.

#include <iostream>

using namespace std;

int main()
{

    int x;
    cout << "Enter a number to check if its even or odd ";
    cin >> x;

    if (x % 2 == 0)
    {
        cout << x << " is even.";
    }
    else
    {
        cout << x << " is odd.";
    }

    return 0;
}