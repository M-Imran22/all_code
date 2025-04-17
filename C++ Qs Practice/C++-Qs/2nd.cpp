#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a no: ";
    cin >> n;
    int no = 1;

    cout << "0 1 ";
    for (int i = 1; i < n; i++)
    {
        cout << no << " ";
        no += i;
    }
    return 0;
}