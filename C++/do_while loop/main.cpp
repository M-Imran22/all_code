#include <iostream>

using namespace std;

int main()
{
    int tb;
    cout <<"Which Table do you want : ";
    cin >>tb;
    int sn;
    cout <<"Entered starting number : ";
    cin >>sn;
    int en;
    cout <<"Entered ending number : ";
    cin >>en;
    int x=1;
    do
    {
        cout <<tb<<"x"<<x<<"="<<tb*x<<"\n";
        x=x+1;
    }
    while(x<=en);
    cout <<"\n It's done \n";

    return 0;
}
