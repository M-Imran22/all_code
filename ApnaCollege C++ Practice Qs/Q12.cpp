// Linear Search in Array

#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int numArr[] = {23, 5, 43, 12, 67, 98};
    int size = 2;
    int target = 12;

    cout << "Index no is " << LinearSearch(numArr, size, target);

    return 0;
}