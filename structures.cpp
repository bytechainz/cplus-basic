#include <iostream>
#include <string>
using namespace std;

struct car {
    string brand;
    string model;
    int year;
};

int main() {
    struct {
        int myNum;
        string myString;
    }myStructure;

    myStructure.myNum = 1;
    myStructure.myString = "tama";

    cout << "test 1 : " << myStructure.myNum << endl;
    cout << "test 2 : " << myStructure.myString << endl;

    struct {
        string brand;
        string model;
        int year;
    }myCar1, myCar2;

    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    // Print the structure members
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";


    // car
    car carClassic;
    carClassic.brand = "mazda";
    carClassic.model = "classic";
    carClassic.year = 1900;

    cout << "brand : " << carClassic.brand << endl;


    return 0;
}