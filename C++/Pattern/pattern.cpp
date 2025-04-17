#include<iostream>
using namespace std;

int main ()
{
    // Simple pattern
    /*
    int a;
    cout <<"Entered a number for Pattern \n";
    cin>>a;

    for (int i = 1; i <=a; i++)
    {
        for(int k=1;k<=a+1-i;k++)
        {
            cout<<k <<" ";
        }
        cout <<endl;
    }
    */

   // 0 and 1 Pattern
   /*
   int n;
   cin >>n;

   for (int i=1; i<=n; i++)
   {
    for (int j=1; j<=i; j++)
    {
        if((i+j)%2==0)
        {
            cout <<" 1";
        }
        else
        {
            cout <<" 0";
        }
    }
    cout <<endl;
   }
   */

  int k;
  cin>>k;

  for (int i=1; i<=k; i++)
  {
    for (int j=1; j<=k-i; j++)
    {
        cout<<" ";
    }       
    for (int j=1; j<=k; j++)
    {
        cout<<" *";
    } 
     cout <<endl;
  }
    return 0;

}