// **Check if a number is a palindrome**
// Check whether a number reads the same backward as forward.

#include <iostream>

using namespace std;

int main()
{

    int num;
    cout << "Enter a number to check if it's palindrome or not.  ";
    cin >> num;
    int orignalNum = num;

    int reverse = 0;

    while (num > 0)
    {
        int lastDigit = num % 10;
        reverse = (reverse * 10) + lastDigit;
        num /= 10;
    }

    if (reverse == orignalNum)
    {
        cout << "The number " << orignalNum << " is palindrome.";
        return 0;
    }
    else
    {
        cout << "The number " << orignalNum << " is not a palindrome. ";
    }

    return 0;
}