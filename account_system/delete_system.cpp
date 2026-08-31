#include <iostream>
#include <fstream>
#include "json.hpp"
#include "acc_system.hpp"

using namespace std;

void systemDeleteAccount(){
    string username;
    string password;

    ifstream database_load("database.json");
    unordered_map <string, string> data_akun;

    if (database_load.is_open() and database_load.peek() != ifstream::traits_type::eof()){
        nlohmann::json data_tempo;
        database_load >> data_tempo;
        data_akun = data_tempo.get<unordered_map<string,string>>();
        database_load.close();
    }
    else{
        cout << "file kosong, error!" << endl;
    }

    cout << "=== MENGHAPUS AKUN ===" << endl;
    cout << "Masukkan Username: ";
    cin >> username;
    cout << "Masukkan Password: ";
    cin >> password;

    auto it = data_akun.find(username);
    if (it != data_akun.end() and it->second == password){
        cout << "APAKAH ANDA YAKIN INGIN MENGHAPUS AKUN ANDA? y/n" << endl;
        string pilihan;
        int attempt = 0;
        while (attempt < 3){
            cout << "Pilihan: ";
            cin >> pilihan;
            if (pilihan == "y"){
                data_akun.erase(username);
                ofstream database_save("database.json");
                if (database_save.is_open()){
                    nlohmann::json data_tempo2 = data_akun;
                    database_save << data_tempo2.dump(4);
                    database_save.close();
                }
            break;
            }
            else if (pilihan == "n"){
                cout << "=== TERIMAKASIH ATAS KONSIDERASINYA! ===";
                break;
            }
            else{
                cout << "Masukkan Input Yang Benar! (y/n)" << endl;
                cout << "sisa attempt = " << 3 - attempt <<  endl;
                attempt++;
            }
        }
        if (attempt == 3){
            cout << "Attempt habis! Silahkan coba lagi!" << endl;
        }
    }
    else {
        cout << "Username atau Password salah!" << endl;
    }
}