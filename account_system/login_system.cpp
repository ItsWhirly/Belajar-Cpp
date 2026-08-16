#include <iostream>
#include <unordered_map>
#include <fstream>
#include "json.hpp"
using namespace std;

int main(){
    ifstream database("database.json");
    unordered_map <string, string> data_akun;

    if (database.is_open() && database.peek() != ifstream::traits_type::eof()){
        nlohmann::json data_JSON;
        database >> data_JSON;
        data_akun = data_JSON.get<unordered_map<string, string>>(); 
        database.close();
    }
    else {
        cout << "filenya kosong mas" << endl;
    }

    std::string user;
    std::string password;
    
    cout << "=== Masukkan Username dan Password anda! ===" << endl;
    cout << "username: ";
    cin >> user;
    cout << "password: ";
    cin >> password;

    if (data_akun.count(user) > 0 && data_akun[user] == password)
        cout << "=== Selamat datang di WHIRLY.WEB! ===";
    else {
        cout << "yah salah mampus, siapa u jirr";
    }
}