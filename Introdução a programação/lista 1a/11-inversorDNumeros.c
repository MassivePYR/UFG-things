#include<stdio.h>
#include<math.h>
int main(){
    int n1=0,n2=0,n3=0,aux=0,aux1=0;
    scanf("%d",&aux);
    n1=aux/100;
    n2=aux%100/10;
    n3=aux%100%10;
    aux1=((n3*100)+(n2*10)+n1);
    printf("%d\n",aux1);
    return 0;
}