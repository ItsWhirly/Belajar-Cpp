#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    std::string user;
    std::string password;

    unordered_map<std::string, std::string> database = {
        {"Whirly", "1234"},
        {"Amba", "Tubas"}
    };
    
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

    return 0;
}