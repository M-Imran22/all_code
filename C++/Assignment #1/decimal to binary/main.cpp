#include <iostream>

using namespace std;
long long convert(int );

int main()
{
    int n;
    cout <<"Entered a decimal number \n";
    cin >>n;
    cout <<n<<" in decimal = "<<convert(n)<<" in binary ";
    return 0;
}
long long convert(int n)
{
    long long bin=0;
    int i =1,rem;
    while(n!=0)
    {
        rem=n%2;
        n/=2;
        bin+=rem* i;
        i*=10;
    }
    return bin;
}
