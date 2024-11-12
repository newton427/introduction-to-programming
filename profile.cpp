#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare a string variable 
    string firstName, lastName, fullName, favoriteMeal,favoriteMovie;

// Prompt user for their full name
 cout << "Please  your first name: ";
 getline(cin, firstName);
 cout << "Please  your last name: "; // Prompt user for their last name
 getline(cin, lastName);
 cout << "Please  your fullname: ";
 getline(cin, fullName);
 cout << "Please  your favorite Meal: ";
 getline(cin, favoriteMeal);
  cout << "Please  your favorite Movie: ";
 getline(cin, favoriteMovie);


cout << "Your first name is "<< firstName << endl;
cout << "Your last name is "<< lastName << endl;
cout << "Your full name is "<< fullName << endl;
cout << "Your favorite meal is "<< favoriteMeal << endl;
cout << "Your favorite movie is "<< favoriteMovie << endl;

 }


