#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = 3.14159265358979323846;

double circleArea(double radius) {
    return PI * pow(radius, 2);
}

double rectArea(double width, double height) {
    return width * height;
}

int main() {
    double r = 5.0;
    double w = 10.0;
    double h = 5.0;

   
    cout << "Circle Area = " << fixed << setprecision(2) << circleArea(r) << endl;

 
    cout << "Rectangle Area = " << fixed << setprecision(0) << rectArea(w, h) << endl;

    return 0;
}