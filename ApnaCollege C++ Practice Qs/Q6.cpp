// Floyd's Triangle Pattren

#include <iostream>
using namespace std;

int main()
{

    int num = 4, sum = 1;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << sum << " ";
            sum += 1;
        }
        cout << endl;
    }

    return 0;
}