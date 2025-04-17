// **Find the sum of all even numbers between 1 and N**

#include <iostream>

using namespace std;

int main()
{

    int n, sum = 0;

    cout << "Enter a number so we can find the sum of all even number form 1 to your number. ";
    cin >> n;

    for (int i = 0; i <= n; i += 2)
    {
        sum += i;
    }

    cout << "The sum of all even numbers form 0 to " << n << " is " << sum;

    return 0;
}