# Account Management System
Projek simulasi cara kerja manajemen akun dalam bentuk dial interaktif seperti *888# dan menggunakan .json sebagai database sistem ('database.json').

## Feature dan Status Project
- [x] **User Interface Dial:** Interface user untuk sistem.
- [50%] **Integrasi antar Program:** Mengintegrasikan program regis,login,delete,change ke UI.
- [x] **Registrasi Akun:** Pendaftaran user baru + cek duplikasi username.
- [x] **Validasi Input:** Minimum panjang username (5 karakter) & konfirmasi password.
- [x] **Save/Load:** Membaca & menyimpan data akun ke file `database.json`.
- [X] **Log In Akun:** Masuk ke akun yang sudah terdaftar.
- [X] **Ubah Password:** Mengganti password akun.
- [ ] **Hapus Akun:** Menghapus akun dari sistem.

## Alat & Bahan (Tech Stack)
- **Bahasa:** C++20
- **Database:** JSON (`database.json`)
- **Library Tambahan:** [nlohmann/json](https://github.com/nlohmann/json)
- **Materi Utama:** `ifstream`/`ofstream`, `unordered_map`, `struct`.

Creator: ItsWhirly (Projek kebanggaanku hehe)