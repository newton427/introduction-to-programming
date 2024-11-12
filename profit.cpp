#include <iostream>
using namespace std;

int main() {
    // Declare variables for buying price and selling price
    double buying_price, selling_price;

    // Prompt the user to enter the buying price
    cout << "Enter the buying price of the vehicle: ";
    cin >> buying_price;

    // Prompt the user to enter the selling price
    cout << "Enter the selling price of the vehicle: ";
    cin >> selling_price;

    // Calculate the profit
    double profit = selling_price - buying_price;

    // Display the profit
    cout << "Profit: " << profit << endl;

    return 0;
}

