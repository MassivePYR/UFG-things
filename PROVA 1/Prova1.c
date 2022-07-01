#include<stdio.h>

int main(){
    unsigned int matricula, hrs, dep;
    double vph, sf,aux,aux1;
    scanf("%d %d %lf %d %lf", &matricula, &hrs, &vph, &dep, &sf);
    aux=hrs*vph;
    sf=dep*sf;
    aux1=aux+sf;
    printf("MATRICULA DO FUNCIONARIO = %d\n", matricula);
    printf("SALARIO TOTAL = %.2lf\n", aux1);

}