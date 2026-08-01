#include <iostream>
using namespace std;

int main() {
    int tinggi = 5;

    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= tinggi - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl; 
    }

    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= tinggi - 1; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    return 0;
}
