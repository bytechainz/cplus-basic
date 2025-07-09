#include <iostream>
#include <string>
using namespace std;

int main() {
    string greeting = "hello";
    cout << greeting << endl;

    // Concatenation
    string firstName = "john";
    string lastName = "wick";
    string fullName = firstName + lastName;

    cout << "fullname : " << fullName << endl;

    // string length
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "the length is : " << txt.length() << endl;

    // Access Strings
    string myString = "Hello";
    cout << myString[0] << endl; // H

    // special characters
    string txtSpecial = "We are the so-called \"Vikings\" from the north.";
    cout << "text : " << txtSpecial << endl;

    // User Input Strings  
    // string inputFirstName;
    // cout << "type your name : ";
    // cin >> inputFirstName;
    // cout << "your name is : " << inputFirstName << endl; // From the example above, you would expect the program to print "John Doe", but it only prints "John".

    // string fullName1;
    // cout << "Type your full name: ";
    // getline (cin, fullName1);
    // cout << "Your name is: " << fullName1;

    // Omitting Namespace
    // std::string greeting = "Hello";
    // std::cout << greeting;

    char greeting2[] = "Hello";
    cout << greeting2 << endl;

    return 0;
}