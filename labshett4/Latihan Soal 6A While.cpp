#include <
ostream>
using namespace std;

int main() {
    cout << "Menggunakan WHILE:\n";
    int i = 3;
    while (i >= 1) {
        int j = 1;
        while (j <= i) {
            cout << j;
            j++;
        }
        cout << endl;
        i--;
    }
}