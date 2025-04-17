#include <iostream>
using namespace std;

int main()
{
    long long z =1.0;
    int k;
    int a;
    int x;
    cout <<"Entered an EVEN number for factorial \n";
    cin>>x;

    if (x%2==0)
    {
        cout <<x<<"! \n";
        cout <<x;
        for ( a=x; a>=1; a--)
    {
        cout <<"x"<<a-1;
    }
    cout <<"=";

    for ( k=1; k<=x; k++)
    {
        z *= k;
    }
    cout <<z;
    }
    else
    {
        cout <<"it's ODD number \n";
    }

    return 0;
}
