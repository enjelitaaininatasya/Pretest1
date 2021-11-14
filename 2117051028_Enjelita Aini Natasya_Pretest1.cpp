#include <iostream>
using namespace std;

int main() {
	
	//string
	string variabel_nama;
	string variabel_jurusan;
	string variabel_npm;
	string variabel_alamat;
	
	cout << "ISI BIODATA DIBAWAH INI" << endl;
	cout << endl;
	
	//input
	cout << "Masukkan nama =";
	getline(cin,variabel_nama);
	cout << "Masukkan jurusan =";
	getline(cin,variabel_jurusan);
	cout << "Masukkan alamat =";
	getline(cin,variabel_npm);
	cout << "Masukkan npm =";
	getline(cin,variabel_alamat);
	
	cout << endl;
	cout << "Berikut hasil biodata diri anda" << endl;
	cout << endl;
	
	//output
	cout << "nama : " << variabel_nama << endl;
	cout << "jurusan : " << variabel_jurusan << endl;
	cout << "alamat : " << variabel_npm << endl;
	cout << "npm : " << variabel_alamat << endl;
	
	cout << endl;
	cout << "Terima kasih" << endl;
	
	
	
}

