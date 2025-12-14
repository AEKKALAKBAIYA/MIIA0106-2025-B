#include <iostream>
using namespace std;

int main() {
  
    int studentID_suffix;
    int result;           

   
    cout << "========================================" << endl;
    cout << "   Program: Multiplication Table        " << endl;
    cout << "========================================" << endl;
    cout << "Please enter last 2 digits of Student ID: ";
    cin >> studentID_suffix;

    cout << endl;
    cout << "--- Multiplication Table of " << studentID_suffix << " ---" << endl;

   
    for (int i = 1; i <= 12; i++) {
       
        result = studentID_suffix * i;

        
        cout << studentID_suffix << " x " << i << " = " << result << endl;
    }

    cout << "========================================" << endl;

    return 0;
}