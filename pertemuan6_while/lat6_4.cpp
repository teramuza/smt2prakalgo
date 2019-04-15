#include<stdio.h>

int main(){
	int i=1,j=2;

	printf("Ganjil\t: ");
	while(i<36){
		printf("%d ", i);
		i+=2;
	}
	printf("...\n");
	
	printf("Genap\t: ");
	do{
		printf("%d ", j);
		j+=2;
	}while(j<36);
	printf("...\n");
}