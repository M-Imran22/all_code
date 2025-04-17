#include <iostream>

using namespace std;

int main()
{
    char nm[50];
    cout <<"Entered any name which prints 10 times :  ";
    cin>>nm;
    int x=1;
    while(x<=10)
    {
        cout <<nm<<"\n";
        x++;
    }
    cout <<"Thanks \n";
    return 0;
}
