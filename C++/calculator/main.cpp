#include <iostream>
#include<conio.h>
#include<string.h>



   int Calculate(int a,int b,char op){
    if(op=='+'){
        return a+b;
    }else if(op=='-'){
        return a-b;
    }else if(op=='*'){
        return a*b;
    }else if(op=='/'){
        return a/b;
    }
   }


   using namespace std;

int main()
{
    char op;
    int x,y;
    cout <<"Enter first number \n";
    cin >>x;
    cout <<"Enter Operater\n";
    cin >>op;
    cout <<"Enter second  number \n";
    cin >>y;
    cout<<"Result is Equal to :"<< Calculate(x,y, op);


    return 0;
}
