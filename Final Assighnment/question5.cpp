#include <iostream>
#include <cmath>

int main() {
    int choice;
    double radius, length, width, base, height;

    while(true) {
        std::cout << "1. Circle Area\n2. Rectangle Area\n3. Triangle Area\n4. Quit\nEnter your choice: ";
        std::cin >> choice;

        switch(choice) {
            case 1:
                std::cout << "Enter radius: ";
                std::cin >> radius;
                std::cout << "Circle Area: " << M_PI * pow(radius, 2) << std::endl;
                break;
            case 2:
                std::cout << "Enter length and width: ";
                std::cin >> length >> width;
                std::cout << "Rectangle Area: " << length * width << std::endl;
                break;
            case 3:
                std::cout << "Enter base and height: ";
                std::cin >> base >> height;
                std::cout << "Triangle Area: " << 0.5 * base * height << std::endl;
                break;
            case 4:
                std::cout << "Exiting program." << std::endl;
                return 0;
            default:
                std::cout << "Invalid option. Please try again." << std::endl;
        }
    }
}