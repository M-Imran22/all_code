#include <iostream>

using namespace std;
int main()
{
    string stn, stn2;
    cout << "enter a string \n";
    getline(cin, stn);

    for (int i = 0; i < stn.size(); i++)
    {
        bool isDuplicate = false;

        for (int j = 0; j <= i; j++)
        {
            if (stn[i] == stn2[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            stn2 += stn[i];
        }
    }
    cout << stn2;
    return 0;
}