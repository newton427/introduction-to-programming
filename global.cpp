#include <iostream>
using namespace std;

// Global variable declaration and initialization
int globalVar = 30;
const int age = 25; // Constant global variable. Value will not change

void myFunction()
{ 
    // Function code block
}

int main()
{
    // Function code block
    // You cannot modify 'age' because it is a constant
    cout << age << endl;
    return 0;
}