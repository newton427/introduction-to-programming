#include <iostream>
#include <string>

bool NewtonLoanCalculator(int age, double balance, std::string crbStatus, int monthsAsCustomer) {
    if (age > 22 && balance > 50000 && crbStatus == "good" && monthsAsCustomer > 6) {
        return true; // Eligible for loan
    }
    return false; // Not eligible
}

int main() {
    int age, months;
    double balance;
    std::string name, crbStatus;

    std::cout << "Enter customer's name: ";
    std::cin >> name;
    std::cout << "Enter age: ";
    std::cin >> age;
    std::cout << "Enter bank balance: ";
    std::cin >> balance;
    std::cout << "Enter CRB status (good/bad): ";
    std::cin >> crbStatus;
    std::cout << "Enter months as customer: ";
    std::cin >> months;

    if(NewtonLoanCalculator(age, balance, crbStatus, months)) {
        std::cout << name << " is eligible for a loan." << std::endl;
    } else {
        std::cout << name << " is not eligible for a loan." << std::endl;
    }

    return 0;
}