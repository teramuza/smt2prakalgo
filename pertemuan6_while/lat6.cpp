#include<stdio.h>

int main(){
    int a=0, b=1, c, i=0;

    printf("Fibonacci : %d %d", a, b);

    do{
    	c = a + b;

        printf(" %d", c);

        a = b;
        b = c;

        i++;
    }while(i<10);
    printf(" ...\n");
}