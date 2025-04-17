#include <iostream>
using namespace std;

int main()
{
    int x,y,z;
    cout <<"Enter three integer \n ";
    cin >>x  >>y  >>z ;
    if (x>y&&x>z){
        cout <<"The Largest integer is " <<x <<"\n";
    }else if (y>x&&y>z){
        cout <<"The Largest integer is " <<y<<"\n";
    }else if (z>x&&z>y){
        cout << "The Largest integer is " <<z<<"\n";
    }else {
        cout << "Thanks \n";
    }

    return 0;
}
