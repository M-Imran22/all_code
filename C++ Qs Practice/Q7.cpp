//  **Print all even numbers between 0 and 100**
//  **Print all odd numbers between 1 and 100**

#include <iostream>

using namespace std;

int main()
{

    cout << "All even numbers from 0 to 100\n";

    for (int i = 0; i <= 100; i += 2)
    {
        cout << i << endl;
    }
    cout << "All odd numbers from 1 to 100\n";

    for (int i = 1; i <= 100; i += 2)
    {
        cout << i << endl;
    }

    return 0;
}