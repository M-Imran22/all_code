#include<iostream>
using namespace std;

int main()
{
    /*
    for (int number = 1; number <= 100; number++)
    {
        if(number%3==0)
        continue;

        cout <<number<<"    ";
    }
    */
   /*
   int number;
   cin>>number;
   int i;

   for ( i = 2; i < number; i++)
   {
    if(number%i==0)
    cout <<"Non Prime number";
    break;
   }
   if (number%i!=0)
   {
    cout <<"Prime number";
   }
   */
   
   int a, b;
   cout <<"Enter the number for a :";
   cin>>a;
   cout <<"Enter the number for b :";
   cin>>b;
   int i,j;
   for ( i = a; i < b; i++)
   {
    for ( j = 2; j< b; j++)
    {
        if(i%j==0)
        
        break;
    }
    if (j==i)
   {
    cout <<i<<endl;
   }
    
   }
  
   
    return 0;
}