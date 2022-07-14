#include<stdio.h>

double Atotal(double r, double h)
{
    double l;
    l=((2*3.14159)*r)*h;
    return (2*(3.14159*(r*r)))+l;
}

int main(){
    double mqd,raio,hlt;
    scanf("%lf %lf", &raio,&hlt);
    printf("O VALOR DO CUSTO E = %.2lf\n",(Atotal(raio,hlt)*100));
}