// Remove duplicate elements from an array.
// Remove all duplicate elements from an array and display the updated array.

#include <iostream>
#include <vector>
using namespace std;

vector<int> removeDuplicate(vector<int> arr)
{
    int n1 = arr.size();

    for (int i = 0; i < n1; i++)
    {
        for (int j = i + 1; j < n1; j++)
        {

            if (arr[i] == arr[j])
            {
                arr.erase(remove(arr.begin(), arr.end(), arr[i]), arr.end());
            }
        }
    }
    return arr;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 3, 7, 6, 1, 9};

    vector<int> updatedArr = removeDuplicate(arr);

    for (int val : updatedArr)
    {
        cout << val << " ";
    }

    return 0;
}