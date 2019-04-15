#include <iostream>
using namespace std;


int mult(int x, int y, int z);

int main(){
	int x,y,z;

	cout<<"Masukkan bilangan pertama : "; cin>>x;
	cout<<"Masukkan bilangan kedua : "; cin>>y;
	cout<<"Masukkan bilangan ketiga : "; cin>>z;
	cout<<"Hasil perkalian bilangan itu adalah "<<mult(x,y,z);
}

int mult(int x, int y, int z){
	return x*y*z;
}