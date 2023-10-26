#include <iostream>
using namespace std;

int main() {
    int n;

    // Meminta pengguna untuk memasukkan jumlah baris
    cout << "Masukkan jumlah baris: ";
    cin >> n;

    int current = 1;  // Variabel untuk menyimpan angka yang akan dicetak

    // Loop untuk mengatur jumlah baris
    for (int i = 1; i <= n; i++) {
        // Loop dalam loop untuk mencetak angka pada setiap baris
        for (int j = 1; j <= i; j++) {
            cout << current << "\t"; // Mencetak angka
            current++;  // Menaikkan nilai current
        }
        cout << endl;  // Pindah ke baris berikutnya setelah mencetak setiap angka dalam baris
    }
}
