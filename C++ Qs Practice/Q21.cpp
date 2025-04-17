// Count the frequency of elements in an array.
// Count how many times each element appears in an array.

#include <iostream>
#include <vector>
using namespace std;

int frequencyCount(vector<int> arr, int x)
{
    int count = 0, n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> arr = {
        1,
        1,
        2,
        2,
        2,
        3,
    };
    int x;
    cout << "Enter a digit to count the frequency: ";
    cin >> x;

    int elementCount = frequencyCount(arr, x);
    if (elementCount == 0)
    {
        cout << x << " Not found.";
    }
    else
    {
        cout << x << " : " << elementCount;
    }

    return 0;
}