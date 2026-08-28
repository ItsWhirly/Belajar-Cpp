#include <iostream>
#include <unordered_map>
#include <fstream>
#include "json.hpp"
#include "acc_system.hpp"
using namespace std;

void systemLogin(){
    ifstream database("database.json");
    unordered_map <string, string> data_akun;

    if (database.is_open() && database.peek() != ifstream::traits_type::eof()){
        nlohmann::json data_tempo;
        database >> data_tempo;
        data_akun = data_tempo.get<unordered_map<string, string>>(); 
        database.close();
    }
    else {
        cout << "filenya kosong mas" << endl;
    }

    std::string user;
    std::string password;
    
    cout << "=== Masukkan Username dan Password anda! ===" << endl;
    cout << "Uername: ";
    cin >> user;
    cout << "Password: ";
    cin >> password;

    if (data_akun.count(user) > 0 && data_akun[user] == password)
        cout << "=== Selamat datang di WHIRLY.WEB! ===";
    else {
        cout << "yah salah mampus, siapa u jirr";
    }
}