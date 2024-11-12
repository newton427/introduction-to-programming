#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Please enter the age: ";
    cin >> age;

    if (age >= 4) {
        cout << "Admit to school" << endl;
    } else {
        cout << "Declined! Minimum Age not Reached" << endl;
    }

    //using ternary operator 
    cout <<"Using ternary operator" << endl;
    string message = (age >= 4) ? "Admit to school." : "Decline! Minimum age not reached.";
    cout << message << endl;

    return 0;
}

