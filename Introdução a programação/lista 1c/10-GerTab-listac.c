#include<stdio.h>
int main(){
    int cont=0;
    double n, i, k, s, aux, res, aux1,a1;
    scanf("%lf %lf %lf %lf", &n, &i, &k, &s);
    aux1=k, aux=n;
    printf("Tabuada de soma:\n");
    //tab de soma
    while(k>=1){
        res=n+i+(s*cont);
        printf("%.2lf + %.2lf = %.2lf\n", n, (i+(s*cont)), res);
        a1=i+(i*cont);
        k--;
        cont++;
    }
    cont=0;
    k=aux1;
    printf("Tabuada de subtracao:\n");
    //tab de subtração
    while (k>=1){
        res=n-(i+(s*cont));
        printf("%.2lf - %.2lf = %.2lf\n", n, (i+(s*cont)), res);
        k--;
        cont++;
    }
    cont=0;
    k=aux1;
    printf("Tabuada de multiplicacao:\n");
    //tab de multiplicação
    while (k>=1)
    {
        res=n*(i+(s*cont));
        printf("%.2lf x %.2lf = %.2lf\n", n, (i+(s*cont)), res);
        k--;
        cont++;
    }
    cont=0;
    k=aux1;
    printf("Tabuada de divisao:\n");
    //tab de divisão
    while (k>=1)
    {
        res=n/(i+(s*cont));
        printf("%.2lf / %.2lf = %.2lf\n", n, (i+(s*cont)), res);
        k--;
        cont++;
    }
    

}