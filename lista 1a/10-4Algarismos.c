#include<stdio.h>
#include<math.h>
int main(){
    int n1,n2,n3,n4=0,aux=0;
    scanf("%d",&aux);
    n1=aux/100;
    n2=aux%100/10;
    n3=aux%100%10;
    n4=((n1+n2*3+n3*5)%7);
    printf("O NOVO NUMERO E = %d%d%d%d",n1,n2,n3,n4);
}