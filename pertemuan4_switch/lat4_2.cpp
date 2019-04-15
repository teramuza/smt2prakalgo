#include<stdio.h>
#include<cmath>

main(){
    char kode;
    float panjang, lebar, tinggi, luas, keliling, jari, alas;

    printf("Pilih kode dibawah untuk masuk ke perhitungan masing-masing menu\n");
    printf("S. Segitiga\nP. Persegi Panjang \nL. Lingkaran\n");
    printf("Masukkan Kode : [S,P,L] ");scanf("%c", &kode);
    printf("\n=========================================== \n");

    switch(kode){
        case 'P':
            printf("Selamat datang di fungsi perhitungan Persegi Panjang\n\n");
            printf("Masukkan panjang persegi panjang : ");scanf("%f",&panjang);
            printf("Masukkan lebar persegi panjang : ");scanf("%f", &lebar);

            luas = panjang*lebar;
            keliling = 2*(panjang+lebar);

            printf("\n");
            printf("Luas Persegi Panjang : %f\n",luas);
            printf("Keliling persegi panjang : %f\n", keliling);

            break;
        case 'S':
            printf("Selamat datang di fungsi perhitungan luas Segitiga\n\n");
            printf("Masukkan alas segitiga : ");scanf("%f", &alas);
            printf("Masukkan tinggi segitiga : ");scanf("%f", &tinggi);

            luas = (alas*tinggi)/2;

            printf("\n");
            printf("Luas Segitiga adalah : %f\n",luas);

            break;

        case 'L':
            printf("Selamat datang di fungsi perhitungan Lingkaran\n\n");
            printf("Masukkan jari-jari : ");scanf("%f", &jari);

            luas = M_PI*(pow(jari,2));

            keliling = M_PI*jari*2;

            printf("\n");
            printf("Luas Lingkaran adalah : %f\n",luas);
            printf("Keliling Lingkaran : %f\n", keliling);

            break;

        default:
            printf("Terjadi suatu kesalahan");
            break;

    }

}
