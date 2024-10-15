/*
DI FEi Lin lab 6 10/15
Partner: Annie
*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    ifstream myInput;//identify the input and output file 
    ofstream myOutput;

    myInput.open("inData.txt");//open the file 
    myOutput.open("outData.txt");

    int firstInt;//identify the variables for the characters, strings, and integers
    int secondInt;
    char myChar;
    string myString;

    myInput>>firstInt>>secondInt;//inputs and stores the integers 
    myOutput << "sum: "<<firstInt+secondInt<<endl;//prints the sum of the integers 

    myInput>>myChar;//input the character
    myOutput << "char: "<<char(myChar+1)<<endl;//turns the output into the next character

    myInput>>myString;//copies and paste the string. 
    myOutput<<myString;

    myOutput.close();
    myInput.close();//closes both the file 

}