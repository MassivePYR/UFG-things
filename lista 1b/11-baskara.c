#include <stdio.h>
#include <math.h>
int main(){
    double a=0, b=0, c=0, v=0, x1=0, x2=0, raiz=0, aux=0;
    scanf("%lf %lf %lf", &a, &b, &c);
    v = (b*b)-(4*a*c);
    raiz = (sqrt(v));

    if(raiz < 0)
    {
    printf("RAIZES IMAGINARIAS\n");
    }
    if(raiz>=0){
        x1 = ((-b)+raiz)/(2*a);
        x2 = ((-b)-raiz)/(2*a);
        }
    if(x1==x2){
        printf("RAIZ UNICA\n");
        printf("X1 = %.2f \n", x2);
    }
    if(x1 > x2){
        aux = x1;
        x1 = x2;
        x2 = aux;
        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2lf \n", x1);
        printf("X2 = %.2lf \n", x2);
    }else{
        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2lf \n", x1);
        printf("X2 = %.2lf \n", x2);
    }
    return 0;
} 