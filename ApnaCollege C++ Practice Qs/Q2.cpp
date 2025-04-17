//  print a square pattern

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number for pattern.  ";
    cin >> num;

    // Character Pattern
    for (int i = 1; i <= num; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= num; j++)
        {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }

    // Number Pattren

    // for (int i = 1; i <= num; i++)
    // {
    //     for (int j = 1; j <= num; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}