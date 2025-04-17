// **Count the number of digits in a number**

#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    long long x;
    cout << "Enter a number. ";
    cin >> x;

    // 1st method
    // cout << roundf(log10(x) + 1);

    // 2nd method
    int digit_count = 1;
    while (x > 9)
    {

        x = x / 10;
        digit_count += 1;
    }
    cout << "The digit in number is " << digit_count;

    return 0;
}