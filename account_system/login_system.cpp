#include <iostream>
#include <unordered_map>
using namespace std;

void loginUser(unordered_map<string, string>& database){
    std::string user;
    std::string password;
    
    cout << "=== Masukkan Username dan Password anda! ===" << endl;
    cout << "username: ";
    cin >> user;
    cout << "password: ";
    cin >> password;

    if (database.count(user) > 0 && database[user] == password)
        cout << "=== Selamat datang di WHIRLY.WEB! ===";
    else {
        cout << "yah salah mampus, siapa u jirr";
    }
}