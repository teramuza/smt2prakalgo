#include<stdio.h>

main(){
    int kode, i;
    char hari[7][10] = {"Senin","Selasa","Rabu","Kamis","Jumat","Sabtu","Minggu"};

    printf("Masukkan kode : ");scanf("%d",&kode);

    for(i=0;i<7;i++){
        if(kode == (i+1)){
            printf("Kode %d ",kode);
            printf("adalah hari %s",hari[i]);
        }
    }

    return 200;
}
