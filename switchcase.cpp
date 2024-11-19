#include <iostream>
using namespace std;

int main() {
    int option; // Switch variable
    cout << "Hi. This is your BBIT Sem 1 Timetable (May-Aug 2024)" << endl;
    cout << "\n1. Monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday" << endl;
    cout << "Please select the day of choice (e.g., 1, 2, 3, etc...)" << endl;
    cin >> option;

    switch (option)
     {
        case 1:
            cout << "Monday Classes\n";
            cout << "8:00am - 9:00am: BBIT 1106 Math for Business" << endl;
            cout << "9:00am - 10:00am: BBIT 1106 Introduction to Programming" << endl;
        break;
        case 2:
            cout << "Tuesday Classes\n";
            cout << "8:00am - 9:00am: BBIT 1102 Introduction to programs" << endl;
            cout << "9:00am - 10:00am: BBIT 1102 Introduction to Ethics" << endl;
            break;
        // Add more cases for Wednesday, Thursday, and Friday as needed
        default:
            cout << "Invalid option. Please select a valid day." << endl;
            break;
         case 3:
            cout << "Wednesday Classes\n";
            cout << "8:00am - 9:00am: BBIT 1106 Math for Busines" << endl;
            cout << "9:00am - 10:00am: BBIT 1106 Theology" << endl;
            cout << "10:00am - 11:00am: BBIT 1106 Fundamentals of IT" << endl;
            break;
        case 4:
            cout << "Thursday Classes\n";
            cout << "8:00am - 9:00am: BBIT 1106 Accounting" << endl;
            cout << "9:00am - 10:00am: BBIT 1106 Fundamentals of IT" << endl;
            break;
        case 5:
            cout << "Friday Classes\n";
            cout << "8:00am - 9:00am: BBIT Business computing" << endl;
            break;
    }

    return 0;
}
