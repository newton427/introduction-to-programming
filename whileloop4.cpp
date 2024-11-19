#include <iostream>
#include <string>
using namespace std;

int main() {
    const string correctPassword = "secure123"; // Set the correct password
    string enteredPassword; // Variable to store user input
    int attempts = 0; // Counter for wrong attempts

    while (attempts < 3) { // Allow up to 3 attempts
        cout << "Enter your password: ";
        cin >> enteredPassword;

        if (enteredPassword == correctPassword) { // Check if the password is correct
            cout << "Access Granted!" << endl;
            return 0; // Exit the program
        } else {
            attempts++; // Increment the attempt counter
            cout << "Wrong password. Attempts left: " << (3 - attempts) << endl;
        }
    }

    // If the loop ends, the user has exhausted their attempts
    cout << "Password Blocked!" << endl;
    return 0;
}
