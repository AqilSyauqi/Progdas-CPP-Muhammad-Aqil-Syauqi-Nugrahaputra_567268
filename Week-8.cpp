/*latihan Chapter 6, Programming exercise no 8. 
Distance between two points menggunakan rumus jarak euclidean

nama : Muhammad Aqil Syauqi Nugrahaputra
Prodi : Teknik Elektro 
NIM : 25/567268/TK/63994*/

#include <iostream> //library untuk input dan output
#include <cmath> //library untuk fungsi matematika seperti sqrt dan pow
using namespace std;

void circumference (double r) { //fungsi untuk menghitung keliling lingkaran menggunakan jari-jari
    cout << "\nCircumference is : " << 2 * 3.1416 * r <<endl; 
    }


void area (double r) { //fungsi untuk menghitung luas lingkaran menggunakan jari-jari
   cout << "\narea is : " << 3.1416 * r * r <<endl; 
}


int main() {
    double x1, x2, y1, y2; //deklarasi variabel untuk koordinat dua titik
    cout << "enter x1 and y2 coordinate : "; 
    cin >> x1 >> y1; //input koordinat titik pertama
    cout << "enter y1 and y2 coordinate : ";
    cin >> x2 >> y2; //input koordinat titik kedua

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //menghitung jarak antara dua titik menggunakan rumus jarak Euclidean
    double r = distance; //menggunakan jarak sebagai jari-jari lingkaran
    cout << "Distance between two points is : " << r << endl;

    circumference(r); //memanggil fungsi yang digunakan untuk menghitung keliling lingkaran 
    area(r); //memanggil fungsi yang digunakan untuk menghitung luas lingkaran
    
    return 0; 
}