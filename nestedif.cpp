#include <iostream>
using namespace std;

int main() {
    // Declare necessary variables
    string childName, interest;
    int age;

    // Prompt user for child's full name
    cout << "Please enter the child's full name: ";
    getline(cin, childName);
    cout << "Please enter the child's age: ";
    cin >> age;

    if (age >= 4 && age <= 10) {
        cout << "Please enter the child's interest: ";
        cin >> interest;
        if (interest == "soccer") { // first nested if
            cout << childName << " has been admitted and assigned to the soccer playgroup." << endl;
        } else if (interest == "art") { // second nested if
            cout << childName << " has been admitted and assigned to the art playgroup." << endl;
        } else {
            cout << childName << " has been admitted and assigned to other groups." << endl;
        }
    } else {
        cout << "Admission unsuccessful. " << childName << " child age is invalid." << endl;
    }

    return 0;
}
