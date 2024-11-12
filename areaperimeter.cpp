#include <iostream>
using namespace std;

int main() {
    // Given dimensions
    double base = 10.0;
    double height = 7.0;
    double hypotenuse = 12.0;
    
    // Calculate the area of the triangle
    double area = (base * height) / 2;
    
    // Calculate the perimeter of the triangle
    double perimeter = base + height + hypotenuse;
    
    // Display the results
    cout << "Area of the triangle: " << area << endl;
    cout << "Perimeter of the triangle: " << perimeter << endl;
    
    return 0;
}
