#include<stdio.h>
#include<math.h>
int main(){
    int NQ=0,ND=0,M=0,NC=0,aux=0;
    scanf("%d",&aux);
    NC=aux/100;
    NQ=aux%100/50;
    ND=aux%100%50/10;
    M=aux%100%50%10; 
    printf("NOTAS DE 100 = %d\n",NC);
    printf("NOTAS DE 50 = %d\n",NQ);
    printf("NOTAS DE 10 = %d\n",ND);
    printf("MOEDAS DE 1 = %d\n",M);
    return 0;
}