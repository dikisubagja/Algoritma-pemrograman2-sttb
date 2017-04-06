#include <iostream>
using namespace std;

long long int faktorial (int x) {
	if ((x == 0)||(x == 1))
	return (x);

	else 
	return (x*faktorial(x-1));
}