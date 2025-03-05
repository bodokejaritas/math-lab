// Math Lab
#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int num1, num2;
    char op;
    double result;

    // Get input from user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter an operation (+, -, *, /): ";
    cin >> op;

    // Perform calculation
    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        result = num1 / num2;
    } else {
        cout << "Invalid operation" << endl;
        return 0;
    }

    // Output the result
    cout << "Result: " << result << endl;

    return 0;
}
