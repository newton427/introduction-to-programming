#include <iostream>

void processWithdrawal(double& balance, double& dailyLimit, double withdrawalAmount) {
    if(withdrawalAmount <= balance && withdrawalAmount <= dailyLimit) {
        balance -= withdrawalAmount;
        dailyLimit -= withdrawalAmount;
        std::cout << "Withdrawal successful. Remaining balance: $" << balance << std::endl;
        std::cout << "Remaining daily withdrawal limit: $" << dailyLimit << std::endl;
    }
    else if(withdrawalAmount > balance) {
        std::cout << "Insufficient funds. Current balance: $" << balance << std::endl;
    }
    else if(withdrawalAmount > dailyLimit) {
        std::cout << "Exceeds daily withdrawal limit. Remaining limit: $" << dailyLimit << std::endl;
    }
    else {
        std::cout << "Withdrawal cannot be processed. Please check the amount." << std::endl;
    }
}

int main() {
    double balance = 1000.00; // Example starting balance
    double dailyLimit = 500.00; // Example daily limit
    double withdrawalAmount;

    std::cout << "Enter the amount you wish to withdraw: $";
    std::cin >> withdrawalAmount;

    processWithdrawal(balance, dailyLimit, withdrawalAmount);

    return 0;
}