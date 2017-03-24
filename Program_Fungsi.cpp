#include <iostream>
using namespace std;

//prototype
void prosesBaca () ;
int prosesTambah () ;
int prosesKurang () ;
void prosesTampil () ;

//variabel Global
int a, b ;

//program utama
int main () {
	prosesBaca () ;
	prosesTampil ();
	return 0 ;
}

//Proses Membaca
void prosesBaca () {
	cout << "Masukan nilai A : " ;
	cin >> a ;
	cout << "Masukan nilai B : " ;
	cin >> b ;
}

//Proses Tambah
int prosesTambah () {
	return a + b ;
}

//Proses Kurang
int prosesKurang () {
	int hasil ;
	hasil = a - b;
	return hasil ;
}

//Proses Tampil
void prosesTampil () {
	cout << "Hasil tambah : " << prosesTambah () <<endl ;
	cout << "Hasil kurang : " << prosesKurang () ;
}