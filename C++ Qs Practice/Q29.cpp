// Find the frequency of characters in a string
// Count how many times each character appears in a string.

#include <iostream>
using namespace std;

int main()
{

    string name;
    cout << "Enter a name to find the frequency of characters.\n";
    getline(cin, name);
    int n = name.length();
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        int k = i - 1;
        while (k >= 0)
        {
            if (name[i] == name[k])
            {
                i++;
                k = i - 1;
            }
            k--;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (name[i] == name[j])
            {
                count++;
            }
        }
        cout << name[i] << " = " << count << endl;
    }
    return 0;
}