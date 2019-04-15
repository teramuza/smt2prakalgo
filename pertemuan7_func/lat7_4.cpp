#include <stdio.h>

long int fibonacci(int n){
	if(n==1 || n==2)
		return 1;
	else
		return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
	int x;
	printf("Masukkan banyak nilai fibonacci\n");
	printf("masukan nilai x : ");scanf("%d", &x);
	printf("nilai fibonacci dari %d = %ld\n", x, fibonacci(x));
}