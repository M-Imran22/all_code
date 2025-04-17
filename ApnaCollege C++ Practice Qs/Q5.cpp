// Reverse Triangle Pattren

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number for reverse pattren.  ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}