
#include <iostream>
using namespace std;
int main() {
    int i;

    cout << "--- For Loop ---" << endl;
    for (i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl << endl;

    cout << "--- While Loop ---" << endl;
    i = 1;
    while (i <= 10) {
        cout << i << " ";
        i++;
    }
    cout << endl << endl;

    cout << "--- Do-While Loop ---" << endl;
    i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= 10);
    cout << endl;

    return 0;
}
