#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int Rno;
    char name[10];
    char add[20];
    ofstream fptr;
    cout << "Data Entry\n";

    fptr.open("Stuent.Data", ios::out);
    int c = 0;
    while (c != 2)
    {
        cout << "Entered Rno, name and address\n";
        cin >> Rno >> name >> add;
        fptr << Rno << endl;
        fptr << name << endl;
        fptr << add << endl;
        c++;
    }
    fptr.close();

    ifstream file;
    cout << "Data View\n";

    file.open("Stuent.Data", ios::in);
    if (!file)
    {
        cout << "File does not exist" << endl;
        exit(1);
    }
    while (file >> Rno >> name >> add)
        cout << Rno << " " << name << " " << add << endl;

    fptr.close();

    return 0;
}
/*
int fact(int n);
// int pow(int n, int p);
int main()
{
    int a;
    cout << "Entered any number for factorial\n";
    cin >> a;
    cout << "Factorial = " << fact(a) << endl;

     int x, y;
     cout << "Entered any two numbers (a number and its power)\n";
     cin >> x >> y;
     cout << "result = " << pow(x, y);
    return 0;
}
int fact(int a)
{
    if (a == 1)
        return (1);
    else
        // Recursive Function.
        return (a * fact(a - 1));
}
int pow(int x, int y)
{
    if (y == 1)
        return (x);
    else
        return (x * pow(x, y - 1));
}*/