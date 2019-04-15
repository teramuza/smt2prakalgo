#include<stdio.h>

main(){
    int x;

    printf("Masukkan nilai : ");scanf("%d", &x);

    if(x>0)
        printf("Bilangan Positif");
    else if(x<0)
        printf("Bilangan Negatif");
    else if(x==0)
        printf("Bilangan 0/kosong");
}
