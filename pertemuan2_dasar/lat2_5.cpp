#include<stdio.h>

main(){
    long int beli, disc, total;

    printf("Masukkan pembelian : "); scanf("%ld",&beli);

    if(beli>=100000){
        disc=0.1*beli;
        total=beli-disc;
    }else{
        disc=0.05*beli;
        total=beli-disc;
    }

    printf("Jadi discount adalah : %ld\n", disc);
    printf("Jadi Total Pembayaran adalah : %ld\n", total);
}
