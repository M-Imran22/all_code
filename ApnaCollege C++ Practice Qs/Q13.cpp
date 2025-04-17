// Reverse an Array

#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int numArr[] = {
        1,
        2,
        3,
        4,
    };
    int size = 4;
    reverseArray(numArr, size);
    for (int i = 0; i < size; i++)
    {
        cout << numArr[i] << " ";
    }
    return 0;
}