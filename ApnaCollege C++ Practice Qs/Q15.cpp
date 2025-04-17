// WAF to calculate the sum and products in an array

#include <iostream>
using namespace std;

int sumOfAllNums(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int productOfAllNums(int arr[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    return product;
}

int main()
{
    int nums[] = {
        1,
        2,
        3,
        4,
        5,
    };
    int size = sizeof(nums) / sizeof(nums[0]);
    cout << "sum of all numbers : " << sumOfAllNums(nums, size) << endl;
    cout << "Product of all numbers : " << productOfAllNums(nums, size);

    return 0;
}