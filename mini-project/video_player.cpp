#include <iostream>
#include <cstdlib>

int main(){
    std::string yesnot;
    std::cout << "=== SELAMAT DATANG === "<< std::endl;
    std::cout << "Apakah anda mau memutar video ini? (y/n): ";
    std::cin >> yesnot;

    if (yesnot == "y"){
    system("start video.mp4");
    }
    else if (yesnot == "n"){
        exit;
    }
    else{
        std::cout << "Pilihan tidak valid!";
        exit;
    }
}