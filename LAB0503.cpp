#include <iostream>
using namespace std;

void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}


void swapByReference(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
   
    int a = 10;
    int b = 20;

   
    cout << "Before swap: a = " << a << ", b = " << b << endl;

    swapByValue(a, b);
    cout << "After swap (Call by Value): a = " << a << ", b = " << b << endl;

    swapByReference(a, b);
  
    cout << "After swap (Call by Reference): a = " << a << ", b = " << b << endl;

    return 0;
}