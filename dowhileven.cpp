#include <iostream>
using namespace std;

int main() {
    int num = 12; // Start from 12

    do {
        cout << num << " "; // Output the current even number
        num += 2;           // Increment by 2 to get the next even number
    } while (num <= 50);    // Continue as long as the number is less than or equal to 50

    cout << endl; // End with a new line for better formatting
    return 0;
}
