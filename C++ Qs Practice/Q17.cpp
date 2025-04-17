// **Print all prime numbers between 1 and 100**
// Print all prime numbers between 1 and 100.

#include <iostream>

using namespace std;

int main()
{

    cout << "All Prime numbers form 1 to 100. \n";
    int i = 1;
    while (i <= 100)
    {
        if (i % 1 == 0 && i % i == 0)
        {
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    i++;
                    j = 2;
                }
            }
            cout << i << " ";
            i++;
        }
    }

    return 9;
}