#include<stdio.h>

main(){
    int i;
    for(i=0;i<10;i++){
        if(i==4) continue;
        printf("Bilangan : %d\n",i);
        if(i==6) break;
    }
}
