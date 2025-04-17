#include <iostream>
#include <string>

using namespace std;
int Calculate(long long int a,long long int b, char op) {
    if (op == '+') {
        return a + b;
    } else if (op == '-') {
        return a - b;
    } else if (op == '*') {
        return a * b;
    } else if (op == '/') {
        if (b != 0) {
            float z =  a / b;
            return z;
        } else {
            cout << "Error: Division by zero is not allowed.\n";
            return 0;
        }
    } else {
        cout << "Error: Invalid operator.\n";
        return 0;
    }
}

int main() {
    char op;
    long long int x, y;

    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter Operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> y;

    long long int result = Calculate(x, y, op);
    cout << x <<op <<y <<" = " << result << endl;

    return 0;
}
