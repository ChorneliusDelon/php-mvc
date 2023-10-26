#include <iostream>
using namespace std;

int main() {
    cout << "Menggunakan DO-WHILE:\n";
    int i = 3;
    do {
        int j = 1;
        do {
            cout << j;
            j++;
        } while (j <= i);
        cout << endl;
        i--;
    } while (i >= 1);
}
