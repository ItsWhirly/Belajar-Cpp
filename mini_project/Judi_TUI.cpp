//Program Judi
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //Duit kalau menang
    double duit;
    const double pajak = 0.05;
    cout << "--Selamat Datang di Judi TUI! Berapa uang yang anda inginkan tuan?--" << endl;
    cout << "Masukkan nominal: ";
    cin >> duit;
    double untung = duit + (duit * 0.5);
    double harga_pajak = untung * pajak;
    double duit_setelah_pajak = floor(untung - harga_pajak);

    //Putar dadu
    cout << "Nominal diterima! Pasangan dadu yang anda dapatkan adalah...." << endl;
    int max = 6;
    int min = 1;
    srand(time(0));
    int dadu1 = rand() % (max - min + 1) + min;
    int dadu2 = rand() % (max - min + 1) + min;
    cout << "Dadu 1: " << dadu1 << " - Dadu 2: " << dadu2 << endl;
    cout << "----------------------------------------------" <<  endl;

    //Cek kemenangan 
    if (dadu1 == dadu2) {
        cout << "Selamat! Anda memenangkan Judi TUI!" << endl;
        cout << "Nominal yang anda masukkan: " << duit << endl;
        cout << "Harga pajak: " << harga_pajak << endl;
        cout << "Nominal hadiah yang anda menangkan: " << duit_setelah_pajak << endl;
    } else {
        cout << "Mohon maaf anda belum memenangkan Judi TUI" << endl;
        cout << "Nominal yang anda masukkan: " << duit << endl;
    }

    //penutup
    cout << "----------------------------------------------" <<  endl;
    cout << "Terimakasih sudah berpartisipasi! Mohon tetaplah bodoh dan berjudi lagi!" << endl;
}