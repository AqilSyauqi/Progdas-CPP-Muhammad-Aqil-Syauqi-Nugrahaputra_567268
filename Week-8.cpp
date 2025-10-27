#include <iostream>
#include <cmath>
using namespace std;

void circumference (double r) {
    cout << "\nCircumference is : " << 2 * 3.1416 * r <<endl;
    }


void area (double r) {
   cout << "\narea is : " << 3.1416 * r * r <<endl;
}


int main() {
    double x1, x2, y1, y2;

    cout << "enter x1 and y2 coordinate : ";
    cin >> x1 >> y1;
    cout << "enter y1 and y2 coordinate : ";
    cin >> x2 >> y2;

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double r = distance;
    cout << "Distance between two points is : " << r << endl;

    circumference(r);
    area(r);
    
    return 0;
}