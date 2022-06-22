#include<stdio.h>
#include<math.h>
int main (){
    double p2=0.00,p1=0.00,dt=0.00,impts=0.00,a=0.00,b=0.00,c=0.00;
    scanf("%lf",&p1);
    scanf("%lf",&dt);
    scanf("%lf",&impts);
    a=(dt/100);
    c=p1*a;
    b=(p1*(impts/100));
    p2=p1+c+b;
    printf("O VALOR DO CARRO E = %.2lf\n", p2);
    return 0;
}