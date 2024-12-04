#include <iostream>
#include <string>

int main() {
    std::string name, course;
    int score;

    std::cout << "Enter student's full name: ";
    std::cin >> name;
    std::cout << "Enter course: ";
    std::cin >> course;
    std::cout << "Enter score: ";
    std::cin >> score;

    char grade;
    if(score >= 70) grade = 'A';
    else if(score >= 60) grade = 'B';
    else if(score >= 50) grade = 'C';
    else if(score >= 40) grade = 'D';
    else if(score < 40 && score >= 0) grade = 'F';
    else grade = 'X';  // 'X' for invalid

    switch(grade) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'F':
            std::cout << name << " in " << course << " has grade: " << grade << std::endl;
            break;
        default:
            std::cout << "Invalid score entered." << std::endl;
    }

    return 0;
}