#include <iostream> //library untuk input dan output
#include <cmath> //library untuk fungsi matematika seperti sqrt dan pow
using namespace std;

const double pi = 3.1416; //konstanta untuk nilai pi
//menghitung keliling lingkaran menggunakan jari-jari
void circumference (double r) { 
    cout << "\nCircumference is : " << 2 * pi* r << " satuan " <<endl; 
}

//menghitung luas lingkaran menggunakan jari-jari
void area (double r) { 
   cout << "\narea is : " << pi * r * r << " satuan " <<endl; 
}

//program utama
int main() {
    double x1, x2, y1, y2; //deklarasi variabel untuk koordinat dua titik
    cout << "enter x1 and y2 coordinate : "; 
    cin >> x1 >> y1; //input koordinat titik pertama
    cout << "enter y1 and y2 coordinate : ";
    cin >> x2 >> y2; //input koordinat titik kedua

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //menghitung jarak antara dua titik menggunakan rumus jarak Euclidean
    double r = distance; //menggunakan jarak sebagai jari-jari lingkaran
    double diameter = 2 * r; //menghitung diameter lingkaran
    cout << "Distance between two points is : " << r << " satuan" << endl;
    cout << "Diameter is : " << diameter << " satuan " << endl;

    circumference(r); //memanggil fungsi yang digunakan untuk menghitung keliling lingkaran 
    area(r); //memanggil fungsi yang digunakan untuk menghitung luas lingkaran
    
    return 0; 
}
