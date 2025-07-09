#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main () {
    string cars[5] = {"volvo", "bmw", "ford","mazda","tesla"};
    cout << cars[0] << endl;

    // change array
    cars[0] = "opel";
    cout << cars[0] << endl;

    // loop array
    for (int i = 0; i < 5; i++) {
        cout << cars[i] << endl;
    }

    // array number
    int myNumbers[5] = {10, 20, 30, 40, 50 };
    for (int i = 0; i < 5; i++) {
        cout << myNumbers[i] << endl;
    }

    // foreach
    for (int i : myNumbers) {
        cout << i << endl;
    }

    for (string car : cars) {
        cout << car << endl;
    }

    // Omit Elements on Declaration
    string players[3];
    players[0] = "subowo";
    players[1] = "subowo 1";
    players[2] = "subowo 2";

    for (string player : players) {
        cout << player << endl;
    }

    // Vectors
    // A vector with 3 elements
    vector<string> cars2 = {"Volvo", "BMW", "Ford"};

    // Adding another element to the vector
    cars2.push_back("Lambo");

    for (string car : cars2) {
        cout << car << "\n";
    }

    int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
    cout << "length : " << getArrayLength << endl;


    // ages arrays
    int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};
    int x;

    int length = sizeof(ages) / sizeof(ages[0]);
    int lowestAge = ages[0];

    for (int age : ages) {
        if (lowestAge > age) {
            lowestAge = age;
        }
    }

    cout << "the lowest age is : " << lowestAge << endl;


    // C++ Multi-Dimensional Arrays
    string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };

    cout << letters[0][2] << endl;

    for (int i = 0; i < 2; i++) {
        for (int x = 0; x < 3; x++) {
            cout << letters[i][x] << endl;
        }
    }


    string lettersData[2][2][2] = {
        {
            { "A", "B" },
            { "C", "D" }
        },
        {
            { "E", "F" },
            { "G", "H" }
        }
    };

    for (int i = 0; i < 2; i++) {
        for (int z = 0; z < 2; z++) {
            for (int x = 0; x < 2; x++) {
                cout << lettersData[i][z][x] << endl;
            }
        }
    }


    return 0;
}