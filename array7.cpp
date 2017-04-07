#include <iostream>
using namespace std;

int main(){
	int x;
	cout << "Masukan nilai pengulangan = "<<endl;
	cin >> x;
	int i ;
	string nama[x];
	for(i=0;i<x;i++){
	cin >> nama[i];}
	for(i=0;i<x;i++){
	cout << nama[i] << endl;}
return 0;
}