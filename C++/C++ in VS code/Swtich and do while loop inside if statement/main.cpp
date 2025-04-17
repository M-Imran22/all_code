#include <iostream>
using namespace std;
int main()
{
    string subject;
    char op;
    int a;
    int b;
    int i =1;
    cout << "Entered your subject ! \n";
    cin >> subject;

    if (subject == "maths")
    {
        cout << "Entered Two integers for Mathimathical operation \n";
        cin >> a >> b;
        do
        {

            cout << "Select the following operator to perform Mathimathical operation \n + , - , * , / and % \n";
            cin >> op;
            switch (op)
            {
            case '+':
                cout << "The addition = " << a + b << endl;
                break;
            case '-':
                cout << "The subtraction = " << a - b << endl;
                break;

            case '*':
                cout << "The multiplication = " << a * b << endl;
                break;

            case '/':
                cout << "The division = " << a / b << endl;
                break;

            case '%':
                cout << "The reminder = " << a % b << endl;
                break;
            default:
                cout << "Wrong operater";
            }
            i = i + 1;

        } while (i <= 5);
    }
    else
        cout << subject << " is not available . \n Please try Maths";
    return 0;
}