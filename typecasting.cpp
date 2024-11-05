#include <iostream>
using namespace std;

int main() 
{
    double myNum = 15.5;        // Initialize a double variable
    float myNum2 = 15.5234;     // Initialize a float variable 
    int myNewNum;               // Create a new integer variable
    double myNewNum2;           // Create another double variable
    bool notTrue = false;       // Initialize a boolean variable as false
    bool isTrue = (20 != 0);    // Set isTrue to true since 20 is non-zero

    myNewNum = myNum;           // Assign double to integer (implicit conversion)
    myNewNum2 = myNum2;         // Assign float to double (implicit conversion)
    
    cout << "Integer after implicit conversion: " << myNewNum << endl; // Output the integer variable
    cout << "Double after implicit conversion: " << myNewNum2 << endl; // Output the new double variable
    cout << "notTrue: " << notTrue << endl;                             // Output the boolean variable (false)
    cout << "isTrue: " << isTrue << endl;                               // Output the boolean variable (true)
    
    return 0;
}
