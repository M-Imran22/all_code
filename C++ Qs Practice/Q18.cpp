// **Print the Fibonacci series up to N terms**
// Input N and print the first N terms of the Fibonacci series.

#include <iostream>

using namespace std;

int main()
{

    int num;
    cout << "Enter a number so we can print a Fabonacci series up to that number.  ";
    cin >> num;

    int sum = 1;
    int a = 1;
    cout << "1 ";

    for (int i = 1; i <= num; i++)
    {
        if (sum > num)
        {
            return 0;
        }
        else
        {
            cout << sum << " ";
            int oldSum = sum;
            sum += a;
            a = oldSum;
        }
    }

    return 0;
}