#include <iostream>
using namespace std;

int main()
{
    cout << "\tTringle\n";

    int a = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 4; k >= i; k--)
        {
            cout << " ";
        }

        for (int j = 0; j < a; j++)
        {
            cout << "*";
        }
        cout << endl;
        a = a + 2;
    }
    cout << "\tSqure\n";
    for (int b = 1; b <= 3; b++)
    {
        for (int c = 1; c <= 3; c++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}