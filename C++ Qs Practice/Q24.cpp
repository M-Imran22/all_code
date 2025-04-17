// Find the common elements between two arrays.
// Find and display the common elements between two given arrays.

#include <iostream>
#include <vector>
using namespace std;

vector<int> commonElement(vector<int> arr1, vector<int> arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> newArr;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                newArr.push_back(arr1[i]);
                i++;
                j = 0;
            }
        }
    }
    return newArr;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 7, 6, 5, 8, 9, 0, 11, 12, 33, 44, 22, 55, 44, 66, 77, 88};
    vector<int> arr2 = {2, 5, 3, 7, 6, 8};

    vector<int> newArr = commonElement(arr1, arr2);
    cout << "Common Elements are: ";
    for (int val : newArr)
    {
        cout << val << " ";
    }
    return 0;
}