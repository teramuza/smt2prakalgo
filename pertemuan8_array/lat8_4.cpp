#include <stdio.h>

void matriks(int a[][3]){
	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 3; ++j){
			printf("%d\t", a[i][j]);
		}
	printf("\n\n");

	}
}

int main(){
	int a[3][3] = {{1,3,4},{6,7,8},{0,2,2}};

	printf("Matriks 3x3\n");

	matriks(a);

}