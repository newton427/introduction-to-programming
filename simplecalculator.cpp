#include <iostream>
using namespace std;

int main() {
    // Variable declaration
    float num1, num2, result;
    char operation;

    // Prompt the user for input
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter the second number: ";
    cin >> num2;

    // Perform calculation based on the operation
    if (operation == '+') {
        result = num1 + num2;
    } else if (operation == '-') {
        result = num1 - num2;
    } else if (operation == '*') {
        result = num1 * num2;
    } else if (operation == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
            return 1; // Exit the program with an error code
        }
    } else {
        cout << "Error: Invalid operation." << endl;
        return 1; // Exit the program with an error code
    }

    // Output the result
    cout << "Result: " << result << endl;

    return 0;
}
