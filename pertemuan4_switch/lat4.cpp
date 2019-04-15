#include<stdio.h>

main(){
    int pembelian;
    float total, diskon;

    printf("Masukan total belanja : ");scanf("%d",&pembelian);
    printf("\n");

    switch(pembelian){
        case 100000 ... 199999:
            diskon = pembelian * 0.05;
            total = pembelian-diskon;
            printf("Anda mendapatkan diskon sebesar RP.%f,-\n",diskon);
            printf("Total belanja anda : Rp.%d,-\n",total);
            break;
        case 200000 ... 299999:
            printf("Anda mendapatkan Bonus Tiket ke Yogya\n");
            printf("Total belanja anda : Rp.%d,-\n",pembelian);
            break;
        case 300000 ... 399999:
            printf("Anda mendapatkan Bonus Tiket ke Bali\n");
            printf("Total belanja anda : Rp.%d,-\n",pembelian);
            break;
        case 400000 ... 499999:
            printf("Anda mendapatkan Bonus Jam Tangan Rolex\n");
            printf("Total belanja anda : Rp.%d,-\n",pembelian);
            break;
        case 500000 ... 9999999:
            printf("Anda mendapatkan Bonus Tiket ke Swiss\n");
            printf("Total belanja anda : Rp.%d,-\n",pembelian);
            break;
        default:
            printf("Total belanja anda : Rp.%d,-\n",pembelian);
            break;
    }
}
