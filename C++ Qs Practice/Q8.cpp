// **Print the multiplication table of a given number**
// Input a number and print its multiplication table up to 10.

#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "Which multiplication table do you want ?  ";
    cin >> n;

    if (n == 0)
    {
        cout << "You entered 0. Please enter a vaild number.";
        return 0;
    }
    else
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << n << " x " << i << " = " << n * i << endl;
        }
    }

    return 0;
}