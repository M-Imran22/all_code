// find area of triangle

#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
    float a, b, c;
    cout << "Enter the value of 1st side of triangle: ";
    cin >> a;
    cout << "Enter the value of 2nd side of triangle: ";
    cin >> b;
    cout << "Enter the value of 3rd side of triangle: ";
    cin >> c;

    if (a == 0 || b == 0 || c == 0)
    {
        cout << "There is no triangle.";
    }
    else
    {
        float s = (a + b + c) / 2;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "The area of triangle is " << area;
    }
    return 0;
}