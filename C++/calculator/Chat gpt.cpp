#include <iostream>
#include <string>

using namespace std;

int Calculate(int a, int b, char op) {
    if (op == '+') {
        return a + b;
    } else if (op == '-') {
        return a - b;
    } else if (op == '*') {
        return a * b;
    } else if (op == '/') {
        if (b != 0) {
            return a / b;
        } else {
            std::cout << "Error: Division by zero is not allowed.\n";
            return 0; // Returning 0 for a division by zero error.
        }
    } else {
        std::cout << "Error: Invalid operator.\n";
        return 0; // Returning 0 for an invalid operator.
    }
}

int main() {
    char op;
    int x, y;

    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter Operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> y;

    int result = Calculate(x, y, op);
    cout << "Result: " << result << endl;

    return 0;
}


