#include <iostream>
using namespace std;


bool checkPrime(int n) {
    
    if (n <= 1) {
        return false;
    }

    
    for (int i = 2; i <= n / 2; i++) {
        
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int num;

   
    cout << "Enter a positive integer: ";
    cin >> num;

    
    if (checkPrime(num)) {
        
        cout << num << " is a Prime Number." << endl;
    }
    else {
       
        cout << num << " is NOT a Prime Number." << endl;
    }

    return 0;
}