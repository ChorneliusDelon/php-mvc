#include <iostream>
using namespace std;

int main() {
    cout << "Menggunakan FOR:\n";
    for (int i = 3; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
}