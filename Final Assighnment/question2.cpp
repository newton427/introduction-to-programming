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

    if(score >= 70) {
        std::cout << name << " in " << course << " has grade: A" << std::endl;
    } else if(score >= 60) {
        std::cout << name << " in " << course << " has grade: B" << std::endl;
    } else if(score >= 50) {
        std::cout << name << " in " << course << " has grade: C" << std::endl;
    } else if(score >= 40) {
        std::cout << name << " in " << course << " has grade: D" << std::endl;
    } else if(score < 40 && score >= 0) {
        std::cout << name << " in " << course << " has grade: F" << std::endl;
    } else {
        std::cout << "Invalid score entered." << std::endl;
    }

    return 0;
}