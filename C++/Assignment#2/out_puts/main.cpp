#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    for (int i=1; i<=100; i++)
    {
        if (i%3!=0&&i%7!=0)
        {
            cout <<i<<" ";
            sum+=i;
        }
    }

    cout <<"\n The sum = "<<sum;

  /*  int x=10;
    while(x>=-4)
    {
        cout <<"hello \t";
        cout <<x;
        cout <<"\t Brother   ";
        x-=3;
    }*/
  /* for(int a=1; a<=5;a++)
    {
        for(int b=1; b<=3;b++)
        {
            for (int c=1;c<4; c++)
            {
                cout <<"*";
            }
            cout <<"\n";
        }
        cout <<"\n";
    }*/

    return 0;
}
