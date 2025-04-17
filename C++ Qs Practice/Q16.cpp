// **Check if a number is prime**
// Determine whether a number is prime.

#include <iostream>

using namespace std;

int main()
{

    int num;
    cout << "Enter a number to check if it's a prime or not.  ";
    cin >> num;

    if (num == 1 | num == 2)
    {
        cout << num << " is a prime number.";
        return 0;
    }
    else if (num % 1 == 0 && num % num == 0)
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                cout << num << " is not a prime number. Because it's also divided by " << i;
                return 0;
            }
        }

        cout << num << " is a prime number.";
    }
    else
    {
        cout << "The entered number is zero.";
    }

    return 0;
}