// Write a C++ program to create a simple calculator.

// Explanation:

// The program takes two numbers and an operation as input from the user.
// The operation is stored in a character variable operation.
// The program then uses a series of if-else statements to perform the corresponding calculation and outputs the result.
// The program also includes error handling for division by zero and invalid operator.

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;
    if (operation == '+') {
        cout << num1 + num2 << endl;
    } else if (operation == '-') {
        cout << num1 - num2 << endl;
    } else if (operation == '*') {
        cout << num1 * num2 << endl;
    } else if (operation == '/') {
        if (num2 == 0) {
            cout << "Error: division by zero" << endl;
        } else {
            cout << num1 / num2 << endl;
        }
    } else {
        cout << "Error: invalid operator" << endl;
    }
    return 0;
}
