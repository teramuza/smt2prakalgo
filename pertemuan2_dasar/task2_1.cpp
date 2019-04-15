#include <stdio.h>
#include <cmath>

using namespace std;

main(){
    float r, pi = 3.14, v, l;

    printf("Masukkan Jari-jari bola : ");scanf("%f", &r);

    v = 4/3*pi*(pow(r,3));
    l = 4*pi*(pow(r,2));

    printf("Volume Bola : %f\n", v);
    printf("Luas Bola : %f\n", l);
}
