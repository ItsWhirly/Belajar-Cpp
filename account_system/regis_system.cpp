#include <iostream>
#include <fstream>
#include <unordered_map>
using namespace std;
//kurang masukkin password, dan nulis ke .json

int main (){
    ifstream database("database.json");
    unordered_map<string, string> data_akun;

    if (!database.is_open())
        cout << "Gada file nya bang....";

    string user_input;
    string pass_input;

    cout << "=== SELAMAT DATANG, SILAHKAN REGISTRASI===" << endl ;

    while (true){
    cout << "Masukkan Username: ";
    cin >> user_input;
        if (data_akun.count(user_input) > 0)
            cout <<"Username Sudah Terpakai";
        else  {
            break;;
        }
    }

}