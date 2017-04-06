#include <iostream>
using namespace std;

void faktorial () {
	long long int x, y, n;
	cout << "Masukan bilangan yang akan difaktorialkan = ";
	cin>>x;
	y=x;
	cout<<"Bilangan = "<<x<<endl;
	cout<<x<<"! = ";
   for(n=1;n<=x;n++){
 cout<<n;
 if(n==y) {
	cout<<" =";
 }
 else{
	cout<<"*";
 }
   }
   for(n=1;x>n;) {
 x=x-1;
 y=y*x;
   }
cout<<y;
}
