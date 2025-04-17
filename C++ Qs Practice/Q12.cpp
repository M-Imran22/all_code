//  **Find the reverse of a number**
// Reverse the digits of an input number and display the result.

#include <iostream>

using namespace std;

int main()
{

    int num;
    int reverse = 0;
    cout << "Enter a number to find a reverse: ";
    cin >> num;

    while (num > 0)
    {
        int lastDigit = num % 10;
        reverse = (reverse * 10) + lastDigit;
        num = num / 10;
    }
    cout << "Reverse number is :" << reverse;

    return 0;
}