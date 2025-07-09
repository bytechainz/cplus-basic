#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 20;
    int y = 18;

    if (x > y) {
        cout << "x is greater than y " << endl;
    }

    int time = 22;
    if (time < 10) {
        cout << "Good morning.";
    } else if (time < 20) {
        cout << "Good day.";
    } else {
        cout << "Good evening.";
    }

    int time2 = 20;
    string result = (time2 < 18) ? "Good day." : "Good evening.";
    cout << result;

    return 0;
}