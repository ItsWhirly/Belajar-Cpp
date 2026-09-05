#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

void efekKetik(const string& teks, int jedaChar){ //efek ketik
    for (char huruf:teks){
        cout << huruf << flush;
        this_thread::sleep_for(chrono::milliseconds(jedaChar));
    }
}

void jedaKalimat(int detik){ //jeda panjang
    this_thread::sleep_for(chrono::duration<double>(detik));
}

int main(){
    //Dialogue 1
    efekKetik("???: ", 25);
    jedaKalimat(2);
    efekKetik("Ma? ", 75);
    jedaKalimat(1);
    efekKetik("Mama dimana?", 75);
    jedaKalimat(2);

    //Dialogue 2
    cout << endl;
    efekKetik("Mama(?): ", 50);
    jedaKalimat(1);
    efekKetik("Mama.... ", 75);
    jedaKalimat(1);
    efekKetik("disini....", 75);
}
