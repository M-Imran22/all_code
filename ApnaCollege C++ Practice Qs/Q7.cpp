// Inverted Triangle Pattren

#include <iostream>
using namespace std;

int main()
{
    int num = 6, number = 1;

    for (int i = 0; i < num; i++)

    {
        for (int k = 0; k <= i; k++)
        {
            cout << " ";
        }
        for (int j = i; j < num; j++)
        {
            cout << number;
        }
        cout << endl;
        number += 1;
    }

    return 0;
}