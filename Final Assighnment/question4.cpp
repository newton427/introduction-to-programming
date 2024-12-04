#include <iostream>

int main() {
    int num1, num2;
    std::cin >> num1 >> num2;

    switch(num1 > num2) {
        case true: 
            std::cout << num1 << " is the maximum number." << std::endl;
            break;
        default:
            std::cout << num2 << " is the maximum number." << std::endl;
    }
    return 0;
}