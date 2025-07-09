#include <iostream>
#include <string>
using namespace std;

int main() {
    int myNum = 5;
    float myFloatNum = 5.44;
    double myDoubleNum = 9.98;
    char myLetter = 'D';
    bool myBoolean = true;
    string myText = "hello";
    
    cout << " mynum : " << myNum << endl;
    cout << " myFloatNum : " << myFloatNum << endl;
    cout << " myDoubleNum : " << myDoubleNum << endl;

    cout << " myLetter : " << myLetter << endl;
    cout << " myBoolean : " << myBoolean << endl;
    cout << " myText : " << myText << endl;

    auto myNumAuto = 12;
    cout << " myNumAuto : " << myNumAuto << endl;

    return 0;
}