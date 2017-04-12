#include <iostream>
using namespace std;

typedef struct daftar
{
 char nama[30];
 short umur;
 int NPM;
 float IPK;
}daftar;

int main () {
	daftar mahasiswa[50];
	int i, x, N;

	cout << "Program data mahasiswa"<<endl;
	cout << "================================"<<endl;
	cout << "Masukan banyaknya data mahasiswa : ";
	cin>>N; 
	cout<< endl;

	for(i=0;i<N;i++) {
	 cout << "Nama : ";
	 cin >> mahasiswa[i].nama;
	 cout << "Umur : ";
	 cin >> mahasiswa[i].umur;
	 cout << "NPM : ";
	 cin >> mahasiswa[i].NPM;
	 cout <<"IPK : ";
	 cin >> mahasiswa[i].IPK;
	 cout<< endl;
	 }

	for (x=0;x<N;x++) {
	 cout<<"Data ke ["<<x+1<<"] "<< "bernama " <<mahasiswa[x].nama << " berumur "<<
	 mahasiswa[x].umur
	 <<" tahun" << " , NPM " << mahasiswa[x].NPM<<
	 " dan IPK-nya adalah "<<mahasiswa[x].IPK;
	 cout<<endl;
	 }

	return 0;
}