#include<stdio.h>

main(){
    int a, b=2;

    printf("Ganjil \t: ");
    for(a=1;a<=35;a+=2){
        printf(" %d",a);
    }
    printf("　..... \nGenap \t: ");
    for(b=2;b<=34;b+=2){
        printf(" %d",b);
    }
    printf(" ..... \n");
}
