#include <iostream>
#include <string>
using namespace std;

int min()
{
    //declare a string variable
    string myName, description;

    //prompt user for their full name
    cout <<"please enter your fulll name:";
    getline(cin, myName);
    //prompt user for their description
    cout << "please describe yourself:";
    getline (cin, description);
    cout <<"your name is"<< myName <<endl;
    cout <<"you said the following about your self"<<description <<endl;
}

