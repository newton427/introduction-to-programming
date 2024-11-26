#include <iostream>
using namespace std;

int main() {
    int nums[5]; // Array declaration
    
    // Input loop
    cout << "Please enter 5 integers: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> nums[i]; // Read integers into the array
    }

    // Output loop
    cout << "The 5 integers entered are:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << nums[i] << endl; // Print each integer
    }

    return 0; // End of the program
}
