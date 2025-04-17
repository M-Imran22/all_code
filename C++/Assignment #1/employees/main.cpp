#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char ms;
    char gender;
    int age;

    cout <<"Enter the employee marital status (M/U)\n" ;
    cin >> ms;
    cout <<"Enter the employee gender (M/F)\n";
    cin >>gender;
    cout <<"Enter the employee age \n";
    cin >>age ;
    if (ms=='M')
    {
        cout <<"The employee is ensured \n";
    }

    else if(ms=='U'&&gender=='M'&&age >40)
    {
     cout <<"The employee is ensured \n";
    }

    else if (ms=='U'&&gender=='F'&&age >30)
        {
            cout <<"The employee is ensured \n";
        }
    else
        cout <<"The employee is not insured \n";

    return 0;
}
