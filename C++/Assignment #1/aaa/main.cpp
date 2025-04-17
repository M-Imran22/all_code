#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    int ct =0;
    int vl ;
    while(vl!=0)
    {
        cout <<"Enter an integer number \n";
        cin>> vl;
        sum=sum+vl;
        ct++;
        cout <<"No :"<<ct<<"\n";
        float  avg =sum/ct;
        cout <<"The average is : "<<avg <<"\n";

    }

    return 0;
}
