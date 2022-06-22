#include<stdio.h>
#include<math.h>
int main (){
    float p,p1,x,a,y,b;
    scanf("%lf" "%lf" "%lf", &p1 ,&a, &b);
    x=(p1*(a/100));
    y=(p1*(b/100));
    p=(p1+x+y);
    printf("O VALOR DO CARRO E = %.2lf\n", p);
    return 0;
}