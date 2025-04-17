// Different Square pattren

#include <iostream>
using namespace std;

int main()
{

    int num, sum = 0;
    cout << "Enter a number for pattren.  ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << (sum += 1) << " ";
        }
        cout << endl;
    }

    return 0;
}