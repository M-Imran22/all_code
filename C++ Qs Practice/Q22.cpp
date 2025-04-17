// Find the maximum and minimum element in an array.
// Find both the maximum and minimum elements in an array.

#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArray(vector<int> arr)
{
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--)
    {
        int largest = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[largest])
            {
                largest = i;
            }
        }

        swap(arr[largest], arr[i]);
    }
    return arr;
}

int main()
{
    vector<int> arr = {23, 11, 32, 54, 87, 5};

    vector<int> newArr = sortArray(arr);
    cout << " Min: " << newArr[0] << "  Max: " << newArr[(arr.size() - 1)];

    return 0;
}