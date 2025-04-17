// Remove spaces from a string.
// Remove all spaces from a given string.

#include <iostream>
using namespace std;

string removeSpaces(string name)
{
    int n = name.length();
    string newName;

    for (int i = 0; i < n; i++)
    {
        if (name[i] != ' ')
        {
            newName.push_back(name[i]);
        }
    }
    return newName;
}

int main()
{

    string name;

    cout << "\n Enter the name to remove the spaces.\n";
    getline(cin, name);

    cout << removeSpaces(name);

    return 0;
}