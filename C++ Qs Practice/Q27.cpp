// Check if a string is a palindrome.
// Determine whether a string reads the same forward and backward.

#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Enter a name to check if its a palindrome: ";
    cin >> name;
    int n = name.length();
    string reverseName;

    for (int i = n - 1; i >= 0; i--)
    {
        reverseName.push_back(name[i]);
    }
    if (reverseName == name)
    {
        cout << "The entered name " << name << " is palindrome.";
    }
    else
    {
        cout << "The entered name " << name << " is not palindrome.";
    }

    return 0;
}