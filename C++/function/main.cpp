#include <iostream>
#include <string>

using namespace std;
void arth();
int sum(int,int);
int subtract(int ,int);
int multiply(int ,int);
int division(int ,int);
int main()
{
    cout <<"Do you want to find the Addition,subtraction,multiplication and division \n";
    char k[5];
    cin>>k;
    if (k=='yes')
    {
       cout << arth();
    }
    else if (k=='no')
        cout <<" Ok \n";
    return 0;
}
void arth()
{
    int a,b;

    cout<<"entered 2 integers \n";
    cin>>a>>b;
    cout <<"The sum is "<<sum(a,b)<<"\n";
    cout <<"The multiply is "<< multiply(a,b)<<"\n";
    cout <<"The subtraction is  "<<subtract(a,b)<<"\n";
    if (a%b==0)
    cout <<"The division is  "<<division(a,b)<<"\n";
    else
        cout <<"The division is not possible \n";
}
int sum(int a,int b)
{
    int sum;
    sum=a+b;
    return(sum);
}
int multiply(int a,int b)
{
    int multiply;
    multiply=a*b;
    return(multiply);
}
int subtract(int a,int b)
{
    int subtract;
    subtract=a-b;
    return(subtract);
}
int division(int a,int b)
{
    int division;
    division=a/b;
    return(division);
}


