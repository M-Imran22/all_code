#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Q. count the frequency of the Characters
    // string Stn;
    // cout << "Enter a string !";
    // getline(cin, Stn);

    // for (int i = 0; i < Stn.size(); i++)
    // {
    //     int count = 1;
    //     for (int j = 0; j < i; j++)
    //     {
    //         if (Stn[i] == Stn[j])
    //         {
    //             i++;
    //         }
    //     }
    //     for (int k = i + 1; k < Stn.size(); k++)
    //     {
    //         if (Stn[i] == Stn[k])
    //         {
    //             count++;
    //         }
    //     }
    //     cout << Stn[i] << " = " << count << endl;
    // }

    // Q. Reverse a string
    // string Name;
    // cout << "Enter something!";
    // getline(cin, Name);

    // for (int i = (Name.size() - 1); i >= 0; i--)
    // {
    //     cout << Name[i];
    // }

    // Q. Palindrom
    string name = "khan";
    string newName;
    for (int i = name.size(); i >= 0; i--)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            newName += name[i];
        }
    }
    cout << newName;

    return 0;
}