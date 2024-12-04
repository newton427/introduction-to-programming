#include <iostream>
#include <string>

double calculateLateFee(int daysLate, const std::string& bookType) {
    double fee = 0.0;

    if(bookType == "regular") {
        if(daysLate <= 7) {
            fee = daysLate * 0.50;  // 50 cents per day for first week
        } else if(daysLate <= 14) {
            fee = 3.50 + (daysLate - 7) * 1.00; // $3.50 for first 7 days, then $1 per day
        } else {
            fee = 10.50 + (daysLate - 14) * 2.00; // $10.50 for first 14 days, then $2 per day
        }
    }
    else if(bookType == "childrens") {
        fee = daysLate * 0.25; // 25 cents per day for children's books
    }
    else if(bookType == "reference") {
        // Reference books might have a flat fee or a higher per-day rate
        fee = 5.00 + daysLate * 1.50; // $5 fine plus $1.50 per day late
    }
    else {
        std::cout << "Invalid book type entered. No fine calculated." << std::endl;
    }

    return fee;
}

int main() {
    int daysLate;
    std::string bookType;

    std::cout << "Enter the number of days the book is late: ";
    std::cin >> daysLate;
    std::cout << "Enter the type of book (regular/childrens/reference): ";
    std::cin >> bookType;

    double lateFee = calculateLateFee(daysLate, bookType);
    
    if(lateFee > 0) {
        std::cout << "The late fee for returning the book is: $" << lateFee << std::endl;
    }

    return 0;
}