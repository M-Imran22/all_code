#include <iostream>

using namespace std;

int main()
{
    int mul=1;
    cout<<"Multiplication of odd numbers from 1 to 8 is \t";
    for (int i=1; i<=8; i+=2)
        mul*=i;
    cout <<mul;
   /* int x=1;
    while(x<=8)
        {
            mul*=x;
            x+=2;
        }
        cout <<mul;*/
   /* int k=1;
    do
    {
        mul*=k;
        k+=2;
    }
    while(k<=8);
    cout <<mul;
*/
    return 0;
}
