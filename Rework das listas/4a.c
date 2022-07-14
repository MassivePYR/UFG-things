#include<stdio.h>

int main(){
    int a,b,c;
    double delta;
    scanf("%d %d %d", &a,&b,&c);
    delta=(b*b)-(4*a*c);
    printf("O VALOR DA DELTA E = %.2lf\n",delta);
}