// **Find the sum of digits of a number**
// Input a number and calculate the sum of its digits.

#include <iostream>

using namespace std;

int main()
{

    int num;
    cout << "Enter a Number:     ";
    cin >> num;

    int sum = 0;

    while (num > 0)
    {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }

    cout << "The sum of it's digit is => " << sum;

    return 0;
}