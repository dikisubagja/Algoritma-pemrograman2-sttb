#include <iostream>
using namespace std;

int main () {
	int n;
	cout << "PROGRAM INPUT BUKU"<<endl;
	cout << "==================="<<endl;
	cout << "Masukan Jumlah Buku = ";
	cin >> n;
	int x ;
	string buku[n] ;
	 for(x=0;x<n;x++) {
	 cout << "Masukan Nama Buku = " ;
	 cin >> buku[x]; }
	 for(x=0;x<n;x++) {
	cout << "Nama Buku : "; 
	cout << buku[x]<<endl; }
return 0;
}