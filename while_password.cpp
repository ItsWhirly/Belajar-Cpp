#include <iostream>
using namespace std;

int main() {
    string password = "TambangBuruk";
    string input_pass;
    int percobaan = 3;

    while (percobaan >= 0) {
        cout << "tebak password: ";
        cin >> input_pass;

        if (input_pass == password){
            cout << "Gokil, bener. Selamat datang king";
            break;
        }
        else if (percobaan == 0) {
            cout << "gagal. gudbai";
            break;
        }
        else{
            cout << "Coba lagi, percobaan sisa " << percobaan << " kali lagi!" << endl;
            percobaan--;
        }
    }
    return 0;
}