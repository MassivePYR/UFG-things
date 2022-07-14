#include<stdio.h>
double preKw(double numero)
{
    double i;
    i=((numero*0.7)/100);
    return i;
}
int main(){
    double salariominimo=0, consumodaresidencia=0, pkw=0, cDesconto=0;
    scanf("%lf %lf", &salariominimo, &consumodaresidencia);
    pkw=preKw(salariominimo);
    consumodaresidencia=consumodaresidencia*pkw;
    cDesconto=consumodaresidencia*0.9;
    printf("Custo por kW: R$ %.2lf\n", pkw);
    printf("Custo do consumo: R$ %.2lf\n", consumodaresidencia);
    printf("Custo com desconto: R$ %.2lf\n", cDesconto);
}