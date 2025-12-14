#include <iostream> 
using namespace std;

int main() {
   
    int sum = 0; 
    int i;      
   
    for (i = 1; i <= 100; i++) {
        sum = sum + i; 
    }

    
    cout << "Sum of 1 to 100 is: " << sum << endl;

    return 0; 
}