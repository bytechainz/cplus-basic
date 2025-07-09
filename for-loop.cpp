#include <iostream>
#include <string>
using namespace std;

int main() {
    for(int i = 0; i < 5; i++) {
        cout << i << endl;
    }

    // sum number
    int sum = 0;
    for(int i = 1; i <= 5; i++) {
        sum = sum + i;
    }
    cout << "sum : " << sum << endl;

    // countdown
    for(int i = 5; i > 0; i--) {
        cout << i << endl;
    }


    // nested loop
    for (int i = 1; i <= 2; ++i) {
        cout << "outer : " << i << endl;

        for (int j = 1; j <=3; ++j) {
            cout << "inner : " << j << endl;
        }
    }

    // Multiplication Table
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }

    // foreach Loop
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
        cout << i << endl;
    }

    // Loop Through a String
    string word = "Hello";
    for (char c : word) {
        cout <<  c << endl;
    }

    return 0;
}