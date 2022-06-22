#include <stdio.h>

int main(){
    double salmin, kw, ct, cns;
    salmin = 0.00, kw = 0.00, ct = 0.00, cns = 0.00;
    scanf("%lf %lf", &salmin, &cns);
    //printf("Verificacao: consumo R$ %.2f\n", cns);
    kw=(salmin*0.7)/100;
    printf("Custo por kW: R$ %.2lf\n", kw);
    ct=kw*cns;
    printf("Custo do consumo: R$ %.2lf\n", ct);
    printf("Custo com desconto: R$ %.2lf\n", ct-(0.10*ct));
return 0;
}