#include <iostream>

using namespace std;

int main()
{
    char op;
    int x,y;
    cout << "Select one of the following operations: \n 1.Sum 2.Difference 3.Multiplication 4.Division\n
    cin >>op;
    if(op=="sum"){
        cin >> x>> y >>endl;
       return sum(x,y);
    }else if(op=="Difference"){
        cin >> x>> y >>endl;
        return Difference(x,y);
    }else if(op=="Multiplication"){
        cin >> x>> y >>endl;
        return Multiplication(x,y);
    }else if(op=="Division"){
        cin >> x>> y >>endl;
        return Division(x,y);
    }
   function sum(a,b){
    return sum = a+b;
   }
   function Difference(a,b){
    return Difference = a-b;
   }
   function Multiplication(a,b){
    return Multiplication = a*b;
   }
   function Division(a,b){
    return Division = a/b;
   }
    return 0;
}
