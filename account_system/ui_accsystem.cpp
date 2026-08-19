#include <iostream>
#include <cstdlib>
#include <unordered_map>
#include "acc_system.hpp"
using namespace std; 

void systemRegistration();
void system_login();

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
        systemRegistration();
    }
    else if (pilihan == 2){
        systemLogin();
    }
    else if (pilihan == 3){
        std::cout<<"ini juga proses";
    }
    else if (pilihan == 4){
        std::cout<<"sabar yahh";
    }
    else if (pilihan == 5){
        std::cout<<"tunggu aja ehhehe";
    }
    else {
        std::cout<<"ora valid kocak";
    }
}