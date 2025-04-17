//     Sort the elements of an array in increasing order.

#include <iostream>
#include <vector>

using namespace std;

void printArray(vector<int> arr)
{
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
}
// void selectionSort(vector<int> arr)
// {
//     int n = arr.size();

//     for (int i = 0; i < n - 1; i++)
//     {
//         int minDig = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[minDig])
//             {
//                 minDig = j;
//             }
//         }
//         if (arr[i] > arr[minDig])
//         {
//             swap(arr[i], arr[minDig]);
//         }
//     }
//     printArray(arr);
// }

// void bubleSort(vector<int> arr)
// {
//     int n = arr.size();
//     for (int a = n - 1; a >= 0; a--)
//     {
//         int largest = 0;
//         for (int i = a; i >= 0; i--)
//         {
//             if (arr[i] > arr[largest])
//             {
//                 largest = i;
//             }
//         }
//         for (int j = largest; j < a; j++)
//         {
//             swap(arr[j], arr[j + 1]);
//         }
//     }
//     printArray(arr);
// }

void insertionSort(vector<int> arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
                i--;
            }
        }
    }
    printArray(arr);
}
int main()
{
    vector<int> arr = {23, 43, 3, 2, 53, 2, 6, 65, 1, 4};
    printArray(arr);

    // selectionSort(arr);
    // bubleSort(arr);
    insertionSort(arr);

    return 0;
}