#include <iostream>

double calculateTotalCost(double purchaseAmount) {
    double discountRate = 0.0;
    double discountedPrice = purchaseAmount;

    if(purchaseAmount < 50) {
        discountRate = 0.0;  // No discount for purchases under $50
    }
    else if(purchaseAmount < 100) {
        discountRate = 0.05; // 5% off for purchases between $50 and $99.99
    }
    else if(purchaseAmount < 200) {
        discountRate = 0.10; // 10% off for purchases between $100 and $199.99
    }
    else {
        discountRate = 0.15; // 15% off for purchases of $200 or more
    }

    discountedPrice -= purchaseAmount * discountRate;

    std::cout << "Purchase Amount: $" << purchaseAmount << std::endl;
    std::cout << "Discount Applied: " << (discountRate * 100) << "%" << std::endl;
    std::cout << "Total Cost: $" << discountedPrice << std::endl;

    return discountedPrice;
}

int main() {
    double purchaseAmount;
    
    std::cout << "Enter the total purchase amount: $";
    std::cin >> purchaseAmount;

    if(purchaseAmount > 0) {
        calculateTotalCost(purchaseAmount);
    } else {
        std::cout << "Please enter a valid purchase amount." << std::endl;
    }

    return 0;
}