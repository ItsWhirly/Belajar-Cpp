#include <iostream>
#include <cstdlib>
#include <unordered_map>
using namespace std; 

int main (){

    int pilihan;
    
    std::cout << "=== SELAMAT DATANG DI WHIRLY.WEB ===" << std::endl;
    std::cout << "1. Registrasi Akun" << std::endl;
    std::cout << "2. Masuk ke akun" << std::endl;
    std::cout << "3. Hapus akun" << std::endl;
    std::cout << "4. Ganti Sandi Akun" << std::endl;
    std::cout << "5. Informasi" << std::endl;
    std::cout << "====================================" << std::endl;
    std::cout << "pilih: ";
    std::cin >> pilihan;

    if (pilihan == 1){
        std::cout<<"masih proses ygy";
    }
    if (pilihan == 2){
        std::cout<<"belummm sabarrrr";
    }
    if (pilihan == 3){
        std::cout<<"ini juga proses";
    }
    if (pilihan == 4){
        std::cout<<"sabar yahh";
    }
    if (pilihan == 5){
        std::cout<<"tunggu aja ehhehe";
    }
    else {
        std::cout<<"ora valid kocak";
    }
}