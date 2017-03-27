#include <iostream>
using namespace std;

//prototype
void prosesBaca () ;
int isWithinRange(float IP, int max, int min) ;
void prosesTampil ();

//deklarasi
float IP, Nilai_IP, Total_IP;
int max, min, jumlahmahasiswa, jumlahlulus, jumlahtdklulus;

//program utama
int main () {
	prosesBaca () ;
	prosesTampil ();
	return 0;
}

//proses baca
void prosesBaca () {
 do {
	cout << "Masukan IP = ";
	cin >> IP ;
	if (isWithinRange(IP, 4, 0)){
	jumlahmahasiswa ++ ;
		if(IP>=2.75) {
		jumlahlulus ++;
		}
		else {
		jumlahtdklulus ++;
		}
	Total_IP = Total_IP + IP ; //total IP lulus dan tidak lulus, IP yang diluar jangkauan diabaikan
	}		
	else {
	cout << "Tidak ada data " <<endl <<endl;
	}
 }
 while (IP  != -999);
}

//fungsi valid
int isWithinRange(float IP, int max, int min) {
	return max>=IP==IP>=min ;
}


//proses tampil
void prosesTampil () {
cout << "Jumlah mahasiswa = " << jumlahmahasiswa <<endl;
cout << "Jumlah Lulus = " << jumlahlulus <<endl;
cout << "Jumlah Tidak Lulus = " << jumlahtdklulus <<endl;
cout << "Nilai Rata - Rata = " << Total_IP / jumlahmahasiswa <<endl;
}
