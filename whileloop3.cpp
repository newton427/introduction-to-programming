#include <iostream>
using namespace std;

int main() {
    int num = 20;  // Start from 20
    int sum = 0;   // Initialize the sum to 0

    while (num <= 25) { // Continue until 25
        sum += num;     // Add the current number to the sum
        num++;          // Increment the number
    }

    cout << "The sum of whole numbers from 20 to 25 is: " << sum << endl;
    return 0;
}
