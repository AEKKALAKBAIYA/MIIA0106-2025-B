#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
   
    srand(time(0));

   
    int secretNumber = rand() % 100 + 1; 
    int guess;
    int attempts = 0;

    cout << "--------------------------------------" << endl;
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "--------------------------------------" << endl;

    
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++; 

       
        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        }
        else {
            cout << "\n**************************************" << endl;
            cout << "Congratulations! You got it!" << endl;
            cout << "The secret number was: " << secretNumber << endl;
            cout << "You took " << attempts << " attempts." << endl;
            cout << "**************************************" << endl;
        }

    } while (guess != secretNumber); 

    return 0;
}