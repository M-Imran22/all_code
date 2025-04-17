#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> Arr1 = {1, 1, 2, 2, 3, 4, 5};
    vector<int> Arr2 = {3, 4, 4, 5, 6, 7, 8, 9};
    vector<int> interSection;

    for (int i = 0; i < Arr1.size(); i++)
    {
        bool isDuplicate = false;
        bool isDetect = false;
        for (int j = 0; j < Arr2.size(); j++)
        {
            if (Arr1[i] == Arr2[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (isDuplicate)
        {
            for (int k = 0; k < i; k++)
            {
                if (Arr1[k] == Arr1[i])
                {
                    isDetect = true;
                    break;
                }
            }
            if (!isDetect)
            {
                interSection.push_back(Arr1[i]);
            }
        }
    }

    for (int value : interSection)
    {
        cout << value << " ";
    }

    return 0;
}
