// Q2: Input two numbers and swap them
// Read two numbers, swap their values, and display the swapped values.

#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter 1st number \n";
    cin >> x;
    cout << "Enter 2nd number \n";
    cin >> y;

    cout << "Numbers before swap " << x << " " << y << endl;

    z = x;
    x = y;
    y = z;

    cout << "Numbers After swap " << x << " " << y;
    return 0;
}