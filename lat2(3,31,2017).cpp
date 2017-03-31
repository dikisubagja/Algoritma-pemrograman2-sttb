#include <iostream>
using namespace std ;

int maksimum (int a, int b);

int main () {
	cout << "Nilai maksimalnya adalah : " << maksimum(8, 4) ;
	return 0 ;
}


int maksimum (int a, int b) {
	if (a > b) {
	return a ;
}
	else {
	return b;
}
}