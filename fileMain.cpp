#include <iostream>
using namespace std;

// Define the external variable
int globalVar = 100; // Initialization of globalVar

int main()
{
    // Access the external variable
    cout << "In main, globalVar: " << globalVar << endl;

    // Modify the external variable
    globalVar = 200;
    cout << "In main after modification, globalVar: " << globalVar << endl;

    return 0;
}

