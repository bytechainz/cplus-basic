#include <iostream>
using namespace std;

int main () {
    int i = 0;
    while (i < 10) {
        if (i == 4) {
            i++;
            continue;
        }
        cout << i << endl;
        i++;
    }


    // break 
    int x = 0;
    while (x < 10) {
        cout << x << endl;
        x++;
        if(x == 4) {
            break;
        }
    }
    return 0;
}