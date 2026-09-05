#include <iostream>
#include <cmath>

int main(){
    //milih tangan
    int min = 1;
    int max = 3;
    srand(time(0));
    int tangan_player1 = rand() % (max - min + 1) + min;
    int tangan_player2 = rand() % (max - min + 1) + min;
    std::string BaKeGun[4] = { " " , "batu", "kertas", "gunting"};
    //menentukan pemenang
    std::cout << "===BATU, KERTAS, GUNTING===" << std::endl;
    std::cout << "Tangan Player 1: " << BaKeGun[tangan_player1]<< std::endl;
    std::cout << "Tangan Player 2: " << BaKeGun[tangan_player2]<< std::endl;
    if (tangan_player1 == tangan_player2) {
        std::cout << "Hasil: Seri";
    }
    else if (tangan_player1 == 1 and tangan_player2 == 3){
        std::cout << "Hasil: Pemenangnya player 1!";
    }
    else if (tangan_player1 == 2 and tangan_player2 == 1){
        std::cout << "Hasil: Pemenangnya player 1!";
    }
    else if (tangan_player1 == 3 and tangan_player2 == 2){
        std::cout << "Hasil: Pemenangnya player 1!";
    }
    else {
        std::cout << "Hasil: Pemenangnya player 2!";
    }
}