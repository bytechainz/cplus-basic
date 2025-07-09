#include <iostream>
using namespace std;

enum Level {
    LEVEL_LOW = 25,
    LEVEL_MEDIUM = 50,
    LEVEL_HIGH = 75
};

enum Grade {
    GRADE_LOW = 1,
    GRADE_MEDIUM,
    GRADE_HIGH
};

int main () {
    enum Level myVar = LEVEL_HIGH;
    cout << "my level : " << myVar << endl;

    enum Grade myGrade = GRADE_HIGH;
    switch(myGrade) {
        case 1 :
            cout << "low grade" << endl;
            break;
        case 2 : 
            cout << "medium grade" << endl;
            break;
        case 3 : 
            cout << "high grade" << endl;
            break;
        default:
            cout << "not valid" << endl;
    }
    return 0;
}