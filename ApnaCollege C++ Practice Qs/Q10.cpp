// Decimal to Binary and Binary to Decimal convertion

#include <iostream>
using namespace std;

int decToBinary(int decimal)
{
    int ans = 0;
    int pow = 1;

    while (decimal > 0)
    {
        int rem = decimal % 2;
        decimal /= 2;
        ans += (rem * pow);
        pow = pow * 10;
    }

    return ans;
}

int BinaryToDec(int Binary)
{
    int ans = 0;
    int pow = 1;

    while (Binary > 0)
    {
        int rem = Binary % 10;
        Binary /= 10;
        ans += (rem * pow);
        pow = pow * 2;
    }

    return ans;
}

int main()
{
    int num = 50;
    cout << "Decimal to Binary: " << decToBinary(num) << endl;
    cout << "Binary to Decimal: " << BinaryToDec(110010);

    return 0;
}