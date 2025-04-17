// **Find the sum of all numbers between 1 and N**

#include <iostream>

using namespace std;

int main()
{

    int n;
    int sum = 0;
    cout << "Enter a number so we can find the sum of all numbers form 1 to your number. ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "The sum of all numbers are  " << sum;

    return 0;
}