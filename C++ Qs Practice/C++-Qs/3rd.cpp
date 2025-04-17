#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a ch: ";
    cin >> ch;
    if (isalpha(ch))
    {
        cout << "Latter";
    }
    else if (isalnum(ch))
    {
        cout << "Digit";
    }
    else
    {
        cout << "Invalid";
    }

    return 0;
}