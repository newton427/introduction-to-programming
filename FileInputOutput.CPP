#include <iostream>
#include <fstream> //For file input and output
#include <string> //For string input

using namespace std;

int main()
{
    /*write a file. output.txt file will be created
    in the directory of this source file
    */
   ofstream outFile ("output.txt");
   outFile << "writting to a file." << endl;
   outFile.close();


   //Reading from a file
   ifstream inFile("output.txt");
   string content;
   while (std::getline(inFile, content))
   {
    cout<< content << endl;
   }
   inFile.close();//close the file after reading its content

   return 0;
}