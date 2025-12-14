#include <iostream>
using namespace std;

int maxOfThree(int a, int b, int c) {
    
    if (a >= b && a >= c) {
        return a;
    }
 
    else if (b >= a && b >= c) {
        return b;
    }
   
    else {
        return c;
    }
}

int main() {
    
    int num1 = 5;
    int num2 = 15;
    int num3 = 10;

    
    cout << "Maximum value is: " << maxOfThree(num1, num2, num3) << endl;

    return 0;
}