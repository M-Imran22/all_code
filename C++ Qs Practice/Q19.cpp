//  **Check if a number is an Armstrong number**
// An Armstrong number is a number that is equal to the sum of its own digits, each raised to the power of the number of digits in the number.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number to check if it's Armstrong number or not.  ";
    cin >> num;

    int ArmstrongNo = 0;
    int CountDigits = 1;
    int NumCopy = num;
    int OrignalNum = num;

    while (num > 9)
    {
        num /= 10;
        CountDigits += 1;
    }

    while (NumCopy > 0)
    {
        int CubeOfNum = pow((NumCopy % 10), CountDigits);
        ArmstrongNo += CubeOfNum;
        NumCopy /= 10;
    }

    if (OrignalNum == ArmstrongNo)
    {
        cout << OrignalNum << " is Armstrong.";
        return 0;
    }
    else
    {
        cout << OrignalNum << " is not Armstrong.";
    }

    return 0;
}