// **Find the factorial of a number**
// Compute the factorial of an input number.

#include <iostream>

using namespace std;

int main()
{

    int num;
    cout << "Enter a number to find it's factorial.   ";
    cin >> num;
    long long sum = 1;
    for (int i = num; i >= 1; i--)
    {
        sum *= i;
    }
    cout << "Factorial of " << num << " is " << sum;

    return 0;
}