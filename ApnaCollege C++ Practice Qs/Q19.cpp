// find Pair of sum in sorted array

#include <iostream>
#include <vector>
using namespace std;

// 1: Brute-Force Approch

// vector<int> PairSum(vector<int> nums, int target)
// {
//     vector<int> ans;
//  int size = nums.size();

//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (nums[i] + nums[j] == target)
//             {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }

// 2: 2 Pointers Approch

vector<int> PairSum(vector<int> nums, int target)
{
    vector<int> ans;

    int i = 0;
    int j = nums.size() - 1;

    while (i < j)
    {
        if (nums[i] + nums[j] == target)
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if (nums[i] + nums[j] < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;

    vector<int> ans = PairSum(nums, target);
    cout << "Index no: " << ans[0] << ", " << ans[1] << " are the pair Sum of target.";

    return 0;
}
