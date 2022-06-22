#include<stdio.h>
#include<math.h>
int main (){
    float f,p,x,a,y,b;
    scanf("%lf" "%lf" "%lf", &p ,&a, &b);
    x=(p/100)*a;
    y=(p/100)*b;
    f=(p+x+y);
    printf("O VALOR DO CARRO E = %.2lf\n",f);
    return 0;
}