#include <stdio.h>

main(){
    int panjang,lebar,luas, keliling;

    printf("Masukkan Panjang Persegi Panjang : "); scanf("%d", &panjang);
    printf("Masukkan lebar Persegi Panjang : "); scanf("%d", &lebar);

    luas=panjang*lebar;
    keliling=2*(panjang+lebar);

    printf("Jadi luas Persegi panjang adalah : %d\n", luas);
    printf("Jadi Keliling persegi Panjang adalah : %d\n", keliling);
}
