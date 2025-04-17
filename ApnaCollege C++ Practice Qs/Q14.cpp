// Vector Data Structure
// Leetcode Q: Single Number.
// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int ans = 0;
    for (int val : nums)
    {
        ans ^= val;
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 2, 1, 5, 7, 5};
    for (int val : nums)
    {
        cout << val << " ";
    }
    cout << "\n Single number in array is : " << singleNumber(nums);

    return 0;
}