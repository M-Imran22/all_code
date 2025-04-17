// Count the number of vowels in a string.
// Count how many vowels are in a string.

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string name;
    cout << "Enter a name to count the vowels\n";
    getline(cin, name);
    int n = name.length();
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' || name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U')
        {
            count++;
        }
    }
    cout << "The no of vowels in " << name << " is " << count;
    return 0;
}