// Merge two arrays into a single array.
// Merge two arrays and display the merged array.

#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeArr(vector<int> arr1, vector<int> arr2)
{
    int size1 = arr1.size(), size2 = arr2.size();
    vector<int> NewArr = {};
    for (int i = 0; i < size1; i++)
    {
        NewArr.push_back(arr1[i]);
    }

    for (int j = 0; j < size2; j++)
    {
        NewArr.push_back(arr2[j]);
    }

    return NewArr;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {5, 6};

    vector<int> mergedArr = mergeArr(arr1, arr2);
    for (int val : mergedArr)
    {
        cout << val << " ";
    }

    return 0;
}