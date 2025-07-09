#include <iostream>
#include <string>
using namespace std;

int main () {
    string name = "john";
    int age = 11;
    double height = 11.1;

    cout << name << " is " << age << " years old and " << height << " feet tall." << endl;

    // Multiple Variables   
    int x, y, z;
    x = y = z = 50;
    cout << x + y + z << endl;

    // Constants
    const int myNum = 12;
    cout << myNum + 11 << endl;

    // student
    int studentId = 15;
    int studentAge = 23;
    float studentFee = 75.44;
    char studentGrade = 'B';

    cout << " student id : " << studentId << endl;
    cout << " student age : " << studentAge << endl;
    cout << " student fee : " << studentFee << endl;
    cout << " student grade : " << studentGrade << endl;
}