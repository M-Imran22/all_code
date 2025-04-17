// Array : SubArray
// find maximum subarray sum.
// LeetCode Q: Given an integer array nums, find the subarray with the largest sum, and return its sum.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Simple solution

    // int maxSum = INT_MIN;
    // for (int st = 0; st < size; st++)
    // {
    //     int currentSum = 0;
    //     for (int end = st; end < size; end++)
    //     {
    //         currentSum += arr[end];
    //         maxSum = max(currentSum, maxSum);
    //     }
    // }

    // Using Kadane's algorithm

    int currSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        };
    };

    cout << "The maximum subarray sum = " << maxSum;

    return 0;
}
