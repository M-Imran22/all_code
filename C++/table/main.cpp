#include <iostream>

using namespace std;

int main()
{
    int tab,sn,en;
    //sn means 'starting number' and en means 'ending number'.

    cout <<"Which table ?  \t ";

    cin>>tab;
    cout <<"Enter starting number \t ";
    cin >>sn;
    cout <<"Enter ending number \t ";
    cin >>en;
       for(int a=sn; a<=en; a++)
    {
            cout <<tab<<"x"<<a<<" = "<<tab*a<< "\n";

    }

    return 0;
}
