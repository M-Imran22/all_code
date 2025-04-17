// Majority Element in Array

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int MajorityElement(vector<int> nums, int size)
{

    // 1: Brute-Force Approch

    // for (int val : nums)
    // {
    //     int freqCount = 0;
    //     for (int el : nums)
    //     {
    //         if (el == val)
    //         {
    //             freqCount++;
    //         }
    //     }
    //     if (freqCount > size / 2)
    //         return val;
    // }

    // 2: Sorting Approch (more optimaize)

    // sort(nums.begin(), nums.end());

    // int freqCount = 1;
    // int ans = nums[0];
    // for (int i = 1; i < size; i++)
    // {
    //     if (nums[i] == nums[i - 1])
    //     {
    //         freqCount++;
    //     }
    //     else
    //     {
    //         freqCount = 1;
    //         ans = nums[i];
    //     }
    //     if (freqCount > size / 2)
    //     {
    //         return ans;
    //     }
    // };

    // 3: using Moore's algorithms approch

    int freq = 0, ans = 0;
    for (int i = 0; i < size; i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }

        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 2, 1, 2, 1, 2, 2, 1, 2};
    int size = nums.size();

    cout << MajorityElement(nums, size);
    return 0;
}