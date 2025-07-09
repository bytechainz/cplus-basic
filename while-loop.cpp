#include <iostream>
using namespace std;

int main () {
    int i = 0;
    while(i < 5) {
        cout << i << endl;
        i++;
    }

    int countDown = 5;
    while(countDown > 0) {
        cout << countDown << endl;
        countDown--;
    }

    // do while 
    int index = 0;
    do {
        cout << index << endl;
        index++;
    }
    while(index < 5);

    cout << endl;
    cout << "----------------------------" << endl;

    int numbers = 12345;
    int revNumber = 0;

    while(numbers) {
        // numbers % 10 mengambil digit terakhir dari numbers
        // revNumber * 10 menggeser digit sebelumnya ke kiri (ke tempat puluhan, ratusan, dst)
        // numbers /= 10; Menghapus digit terakhir dari numbers

        
        revNumber = revNumber * 10 + numbers % 10;
        numbers /= 10;
    }

    cout << " reverse number " << revNumber << endl;

    return 0;
}