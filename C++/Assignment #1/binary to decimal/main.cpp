#include <iostream>
#include <math.h>

using namespace std;
int convert(long long);

int main()
{
    long long n;
    cout <<"Entered a binary number \n";
    cin >>n;
    cout <<n<<" in binary = "<<convert(n)<<" in decimal ";
    return 0;
}
int convert(long long n)
{
    int dec=0, i =0,rem;
    while(n!=0)
    {
        rem=n%10;
        n/=10;
        dec+=rem* pow(2,i);
        i++;
    }
    return dec;
}
