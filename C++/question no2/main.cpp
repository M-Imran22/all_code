#include<iostream>
using namespace std;

void fibonacci(int x)
{
    int number=1;
    int number1=1;
    cout <<number<<"\t";
    cout <<number1<<"\t";

    int z;
    while (z<x)
    {
        z=number+number1;
        cout <<z<<"\t";
        number=number1;
        number1=z;
    }
    
}

int main ()
{
    int fibo_number;
    cout <<"Enter a number for fibonacci series \n";
    cin >>fibo_number;
    fibonacci(fibo_number);
    return 0;
}

