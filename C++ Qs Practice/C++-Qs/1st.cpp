#include <iostream>
using namespace std;
int main()
{
    int check, num;
    cout << "Enter a number: ";
    cin >> check;
    check = num;
    while (num > 0)
    {
        int a = num % 10;
        result = result * 10 + a;
        num = num / 10;
    }

    if (check == num)
    {
        cout << "Palindrom";
    }
    else
    {
        cout << "Not Palendrom";
    }
    return 0;
}