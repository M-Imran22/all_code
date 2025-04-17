#include <iostream>

using namespace std;

int Reverse(int a)
{
    if(a>0)
    {
        int digit =a%10;
        cout<<digit;
        a=a/10;
        Reverse(a);
    }
    cout << endl;
}
int main()
{
   int number;

   cout <<"Enter a number : \n";
   cin >>number;
   cout <<"The reverse number is : ";
   cout << Reverse(number);
 /*  while(number > 0)
   {
       int digit = number%10;
       cout<< digit;
       number=number/10;
   }
   cout <<endl; */
    return 0;
}

