// WAF to print all the unique numbers in the array

#include <iostream>
using namespace std;

int printUniqueNum(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;

        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            return arr[i];
        }
    }
    return -1;
};

int main()
{
    int nums[] = {1, 3, 2, 1, 2};
    int size = sizeof(nums) / sizeof(nums[0]);

    cout << printUniqueNum(nums, size);

    return 0;
}