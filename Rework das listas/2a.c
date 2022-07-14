#include<stdio.h>

double FtoC(double f)
{
    return (f-32)/1.8;
}
double incTmmts(double inches)
{
    return inches*25.4;
}
int main(){
    double f,i;
    scanf("%lf %lf", &f,&i);
    printf("O VALOR EM CELSIUS = %.2lf\n",FtoC(f));
    printf("A QUANTIDADE DE CHUVA E = %.2lf\n",incTmmts(i));
}
