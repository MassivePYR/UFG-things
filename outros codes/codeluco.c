#include<stdio.h>

int main(){
    double A[300][200];
    printf("tamanho de um double: %d\n", sizeof(double));
    unsigned int endA0_0=&A[0][0];
    printf("endereco de A[0][0]: %d\n", endA0_0);
    printf("calculando endereco de A[150][40]...\n");
    printf("%u\n", endA0_0+150*200*sizeof(double)+40*sizeof(double));
    unsigned int endA150_40=&A[150][40];
    printf("%u\n", endA150_40);
    return 0;

}