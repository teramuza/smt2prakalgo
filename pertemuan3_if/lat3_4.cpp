#include<stdio.h>

main(){
    int nilai;
    char huruf;

    printf("Masukkan nilai : ");scanf("%d", &nilai);

    if(nilai >= 81 && nilai <= 100)
        huruf = 'A';
    else if(nilai >= 71 && nilai <= 80)
        huruf = 'B';
    else if(nilai >= 61 && nilai <= 70)
        huruf = 'C';
    else if(nilai >= 51 && nilai <= 60)
        huruf = 'D';
    else if(nilai <= 50)
        huruf = 'E';

    printf("Nilai :%c\n", huruf);
    printf("Huruf : %c\n", huruf);
}
