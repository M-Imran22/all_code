#include <iostream>

using namespace std;
int main()
{
    int weight, height, bmi;
    cout << "Enter your weight in kg: ";
    cin >> weight;
    cout << "Enter your height in foots: ";
    cin >> height;
    bmi = weight / (height * height);
    if (bmi < 18.5)
        cout << "Underweight";
    else if (bmi >= 18.5 && bmi < 25)
        cout << "Normal";
    else
        cout << "Overweight";
    system("puse>0");
}