#include<iostream>
using namespace std;

int main()
{
    int first_value;
    int second_value;
    cout <<"Enter 1st number:   ";
    cin >>first_value;
    cout << "Enter 2nd number:  ";
    cin >>second_value;
    cout <<"Variables before swapping:  "<<first_value<<" "<<second_value<<endl;


    int *point1= &first_value;
    int *point2= &second_value;

    cout <<"Address of the variables:  "<<point1<<" "<<point2<<endl;
    cout <<"Pointers before swapping:  "<<*point1<<" "<<*point2<<endl;

    *point1 = *point1 + *point2;
    *point2 = *point1 - *point2;
    *point1 = *point1 - *point2;
    cout <<"Pointers after swapping  "<<*point1<<" "<<*point2<<endl;

    return 0;
}
