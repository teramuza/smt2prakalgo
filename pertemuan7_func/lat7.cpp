#include <stdio.h>

void genap(int n);
void ganjil(int n);

int main(){
	int n;
	scanf("Masukan banyak ganjil %d",&n);
	ganjil(n);
	genap(n);
}

void genap(int n){
	int a=2,i=1;

	printf("Bilangan genap : ");
	while(i<(n)){
		printf("%d ", a);
		a+=2;
		i++;
	}
	printf("...\n");
}

void ganjil(int n){
	int a=1,i=1;

	printf("Bilangan genap : ");
	while(i<(n)){
		printf("%d ", a);
		a+=2;
		i++;
	}
	printf("...\n");
}