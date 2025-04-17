// Triangle Pattren

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number for pattren.  ";
    cin >> num;

    // for Stars
    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for numbers
    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << (i + 1) << " ";
    //     }
    //     cout << endl;
    // }

    // for characters
    char ch = 'A';
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }

    return 0;
}