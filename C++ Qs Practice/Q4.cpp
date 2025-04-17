// Find the maximum of three numbers
// Take three numbers and display the largest among them.

#include <iostream>

using namespace std;

int main()
{

    int a, b, c;
    cout << "Enter three numbers to find the max number \n Enter the 1st number ";
    cin >> a;
    cout << "Enter the 2nd number ";
    cin >> b;
    cout << "Enter the 3rd number ";
    cin >> c;
    cout << "The entered numbers are " << a << " " << b << " " << c << endl;

    if (a > b && a > c)
    {
        cout << a << " is maximum";
        return 0;
    }
    else if (b > a && b > c)
    {
        cout << b << " is maximum";
        return 0;
    }
    else
    {
        cout << c << " is maximun";
    }

    return 0;
}