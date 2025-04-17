#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}
double add(double a, double b)
{
    return a+b;
}

int main()
{
    cout<<add(10,20);   //30
    cout<<endl<<add(25.5,35.5);   //61

    /*
    int number1;
    int number2;
    double number;
    double number0;
    cout <<"Enter two numbers for the addition of integer numbers \n";
    cout <<"Enter 1st number: \t";
    cin >>number1;
    cout <<"Enter 2nd number: \t";
    cin >>number2;
    cout <<add(number1,number2)<<endl;
    cout <<"Enter two numbers for the addition of fractional numbers \n";
    cout <<"Enter 1st number: \t";
    cin >>number;
    cout <<"Enter 2nd number: \t";
    cin >>number0;
    cout <<endl<<add(number,number0);
    */
    return 0;
}