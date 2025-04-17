// find min and max number in an array

#include <iostream>
using namespace std;

int main()
{
    int numArr[] = {4, 23, 1, -53, -60};
    int sizeOfNum = 5;
    int indexOfLarge, indexOfSmall;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < sizeOfNum; i++)
    {
        if (numArr[i] > largest)
        {
            largest = numArr[i];
            indexOfLarge = i;
        }
        if (numArr[i] < smallest)
        {
            smallest = numArr[i];
            indexOfSmall = i;
        }
    }
    cout << "Largest = " << largest << " ,Index no is " << indexOfLarge << endl;
    cout << "Smallest = " << smallest << " ,Index no is " << indexOfSmall << endl;

    return 0;
}