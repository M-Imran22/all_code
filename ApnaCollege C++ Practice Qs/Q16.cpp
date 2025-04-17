// WAF to swap mix and min number of an array

#include <iostream>
using namespace std;

void swapMinMax(int arr[], int size)
{
    int min = INT_MAX, max = INT_MIN;
    int minIndex, maxIndex;
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            minIndex = i;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            maxIndex = i;
        }
    }

    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
}

int main()
{
    int nums[] = {9, 4, 2, 6, 3};
    int size = sizeof(nums) / sizeof(nums[0]);

    cout << "Array befor max min number swap \n";
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }

    swapMinMax(nums, size);

    cout << "\nArray after max min number swap \n";
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}