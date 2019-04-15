#include <stdio.h>

int findmax(int n1, int n2);
void printmax(int m);

int main(){
	int i=5, j=7, k;
	k=findmax(i,j);

	printmax(k);
}

int findmax(int n1, int n2){
	if(n1 > n2)
		return n1;
	else
		return n2;
}

void printmax(int m){
	printf("Bilangan yang terbesar adalah : %d\n", m);
}