// Reverse a string.
// Reverse the characters in a string.

#include <iostream>
using namespace std;

int main()
{
    string name;

    cout << "Enter your name\n";
    cin >> name;
    int n = name.length();
    for (int i = n - 1; i >= 0; i--)
    {
        cout << name[i];
    }

    return 0;
}