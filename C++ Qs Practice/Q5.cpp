// Check if a number is positive, negative, or zero
// Read a number and determine whether it is positive, negative, or zero.

#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "Enter a number to check if its a positive, negative or zero \n";
    cin >> n;

    if (n == 0)
    {
        cout << n << " it's zero.";
        return 0;
    }
    else if (n > 0)
    {
        cout << n << " it's a positive number";
        return 0;
    }
    else
    {
        cout << n << " it's a negative number";
    }

    return 0;
}