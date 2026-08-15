#include <iostream>
#include <fstream>
#include <unordered_map>
#include "json.hpp"
using namespace std;
//kurang masukkin password, dan nulis ke .json

int main (){
    ifstream database("database.json");
    unordered_map<string, string> data_akun;

    if (database.is_open() && database.peek() != ifstream::traits_type::eof()){
        nlohmann::json data_JSON;
        database >> data_JSON;
        data_akun = data_JSON.get<unordered_map<string, string>>(); // Auto-konversi & masukin ke data_akun!
        database.close();
    }
    else {
        cout << "filenya kosong cik";
    }

    string user_input;
    string pass_input;

    cout << "=== SELAMAT DATANG, SILAHKAN REGISTRASI===" << endl ;

    while (true){
    cout << "Masukkan Username: ";
    cin >> user_input;
    if (data_akun.count(user_input) > 0)
        cout <<"Username Sudah Terpakai"<<endl;
    else if (user_input.length() < 5) {
        cout << "Username Minimal 5 Huruf!" << endl;
    }
    else {break;}
    }

    cout << "Masukkan Password: ";
    cin >> pass_input;
    while (true){
        string konfir_pass;
        cout << "Konfirmasi Password: ";
        cin >> konfir_pass;
        if (konfir_pass != pass_input){
            cout << "Password salah!" << endl;
        }
        else {break;}
    }

    data_akun[user_input] = pass_input;
    ofstream database_save("database.json");
    if (database_save.is_open()) {
        nlohmann::json data_JSON = data_akun;
        database_save << data_JSON.dump(4);
        database_save.close();
    }

    cout << "=== REGISTRASI BERHASIL! ===";

}