#include<stdio.h>
#include<math.h>
int main(){
    double a=0.0, b=0.0, c=0.0, v=0.0;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
        v = pow(b,2)-4*a*c;
        printf("O VALOR DE DELTA E = %.2lf",v);
return 0;
}