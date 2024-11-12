#include <iostream>
using namespace std;

int main() {
    // Declare necessary variables
    string childName;
    int age;

    // Prompt user for child's full name
    cout << "Please enter the child's full name: ";
    getline(cin, childName);
    cout << "Please enter the child's age: ";
    cin >> age;

    if (age >= 7) {
        cout << "Admission successful. " << childName << " has been admitted to Grade School." << endl;
    } else if (age >= 5 && age <= 6) {
        cout << "Admission successful. " << childName << " has been admitted to Kindergarten." << endl;
    } else if (age >= 3 && age <= 4) {
        cout << "Admission successful. " << childName << " has been admitted to Pre-School." << endl;
    } else if (age >= 1 && age <= 2) {
        cout << "Admission successful. " << childName << " has been admitted to Play Group." << endl;
    } else {
        cout << "Admission unsuccessful. " << childName << " is too young for admission." << endl;
    }

    return 0;
}
