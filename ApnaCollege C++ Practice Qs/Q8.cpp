// Pyramid Triangle Pattren

#include <iostream>
using namespace std;

int main()
{
    int num = 4;

    for (int i = 0; i < num; i++)
    {
        for (int k = i + 1; k < num; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }
        for (int l = i; l >= 1; l--)
        {
            cout << l;
        }
        cout << endl;
    }
    return 0;
}