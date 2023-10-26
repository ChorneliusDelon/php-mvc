#include <iostream>
using namespace std;

int main() {
    int start = 10;  // Suhu awal dalam derajat Celsius
    int end = 100;   // Suhu akhir dalam derajat Celsius
    int step = 10;   // Langkah peningkatan suhu dalam derajat Celsius

    // Menampilkan header
    cout << "C\t\tR\t\tF" << endl;

    // Perulangan untuk mengonversi suhu dari Celsius ke Reamur dan Fahrenheit
    for (int celsius = start; celsius <= end; celsius += step) {
        // Menghitung suhu dalam derajat Reamur dan Fahrenheit
        double reamur = (4.0 / 9.0) * celsius;
        double fahrenheit = (9.0 / 5.0 * celsius) + 32;

        // Menampilkan suhu dalam derajat Celsius, Reamur, dan Fahrenheit
        cout << celsius << "\t\t" << reamur << "\t\t" << fahrenheit << endl;
    }

}
