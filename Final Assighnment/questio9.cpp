#include <iostream>
#include <string>

double calculateTicketPrice(int age, const std::string& movieType) {
    double price = 0.0;

    if(movieType == "regular") {
        if(age < 13) {
            price = 5.00; // Child ticket
        } else if(age >= 60) {
            price = 6.00; // Senior ticket
        } else {
            price = 8.00; // Adult ticket
        }
    }
    else if(movieType == "3D") {
        if(age < 13) {
            price = 8.00; // Child 3D ticket
        } else if(age >= 60) {
            price = 9.00; // Senior 3D ticket
        } else {
            price = 12.00; // Adult 3D ticket
        }
    }
    else {
        std::cout << "Invalid movie type entered." << std::endl;
    }

    return price;
}

int main() {
    int age;
    std::string movieType;

    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Enter the movie type (regular/3D): ";
    std::cin >> movieType;

    double ticketPrice = calculateTicketPrice(age, movieType);

    if(ticketPrice > 0) {
        std::cout << "Your ticket price is: $" << ticketPrice << std::endl;
    }

    return 0;
}