#include <stdio.h>

int main(){
	int square[100];
	int i,k;

	for (i = 0; i < 10; ++i){
		k=i+1;
		square[i]=k*k;
		printf("Pangkat dari %d adalah %d\n", k, square[i]);
	}
}