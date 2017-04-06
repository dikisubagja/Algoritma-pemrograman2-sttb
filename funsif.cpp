#include <iostream>
using namespace std;

long long int faktorial (int x);

int main () {
	int x;
	cout << "Masukan bilangan yang akan difaktorialkan = "<<endl;
	cin >> x;
	cout << "Nilai Faktorial = "<<faktorial(x)<<endl;
	return 0;
}

long long int faktorial (int x) {
	if ((x == 0)||(x == 1))
	return (x);

	else 
	return (x*faktorial(x-1));
}