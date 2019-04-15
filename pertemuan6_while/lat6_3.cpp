#include <cstdio>
#include <iostream>
#include <ctype.h>

using namespace std;

int main(){
    int nomor, bagi, sisa=0;
    char chrpilihan;

    do{
        printf("Masukan suatu bilangan : ");scanf("%d",&nomor);
        printf("Masukan bilangan pembagi (2/3/4/5) : ");scanf("%d",&bagi);
        printf("Bilangan yang dipilih : %d\n", nomor);
        printf("Bilangan pembagi : %d\n",bagi);
        sisa = nomor%bagi;

        if(sisa==0){
            printf("Sisa bagi : tidak ada\n");
        }else{
            printf("Sisa bagi : %d\n", sisa);
        }

        printf("\nApakah anda ingin meneruskan ? (y/N) : ");
        cin>>chrpilihan;
        printf("\n");
    }
    while(tolower(chrpilihan) == 'y');
}
