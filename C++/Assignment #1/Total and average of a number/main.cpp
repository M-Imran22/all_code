#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    int ct =0;
    int vl ;
    cout <<"Enter an integer number \n";
    cin>> vl;
    while(vl!=999)
    {
        cout <<"Enter an integer number again \n";
        cin>> vl;
        sum=sum+vl;
        ct++;
    }
    cout <<"The sum of all number is :"<<sum;
    float  avg =sum/ct;
    cout <<"\n The average is :"<<avg ;
    return 0;
}
