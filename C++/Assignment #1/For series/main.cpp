#include <iostream>

using namespace std;

int main()
{
    int pv =1 ;
    int pv1=1;
    cout <<pv <<"\t";
    cout <<pv1 <<"\t";
    int nv;
    while(nv<21)
    {
        nv=pv+pv1;
        cout <<nv<< "\t";
        pv=pv1;
        pv1=nv;
    }
    return 0;
}