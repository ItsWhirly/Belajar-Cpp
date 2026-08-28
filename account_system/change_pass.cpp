#include <iostream>
#include <fstream>
#include "acc_system.hpp"
#include "json.hpp"
using namespace std;

void systemChangePassword(){
    string user_input;
    string old_pass;
    string new_pass;

    ifstream database("database.json");
    unordered_map <string, string> data_akun;

    if (database.is_open() and database.peek() != ifstream::traits_type::eof()){
        nlohmann::json tempo_data;
        database >> tempo_data;
        data_akun = tempo_data.get<unordered_map<string, string>>();
        database.close();
    }

    cout << "=== MASUKKAN USERNAME DAN PASSWORD ===" << endl;
    cout << "Masukkan Username: ";
    cin >> user_input;
    cout << "Masukkan Password lama: ";
    cin >> old_pass;

    auto it = data_akun.find(user_input);
    if (it != data_akun.end() and it->second == old_pass){
        cout << "=== BERHASIL MASUK! ===" << endl;
        cout << "Masukkan Password Baru: ";
        cin >> new_pass;
        string konfir_pass;
        cout << "Konfirmasi Password: ";
        cin >> konfir_pass;

        if (konfir_pass == new_pass){
            data_akun[user_input] =  new_pass;
            ofstream database_save("database.json");
            if (database_save.is_open()){
                nlohmann::json data_tempo2 = data_akun;
                database_save << data_tempo2.dump(4);
                database_save.close();
                cout << "=== BERHASIL GANTI PASSWORD! ===";
    }
        }
        else {
            cout << "Yang bener masukkinnya, ngulang sana!";
        }
    }
}