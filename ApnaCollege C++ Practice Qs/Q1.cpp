// check if the character is lowercase or uppercase.

#include <iostream>
using namespace std;

int main()
{

    char ch;
    cout << "Enter a number to check if it's a lowercase or uppercase.  ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') // using ASCII (ch>= 65 && ch<=90)
    {
        cout << "The character " << ch << " is a uppercase .\n";
        return 0;
    }
    else
    {
        cout << "The character " << ch << " is a lowercase.\n";
    }
    return 0;
}