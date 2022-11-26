#include <stdio.h>
#include <math.h>

int main() {  
    double c, f, ic, mm;
    scanf("%lf %lf", &f ,&ic);
    c = ((f-32)*5)/9;
    mm = (ic)*(25.4);
    printf("O VALOR EM CELSIUS = %.2lf\n", c);
    printf("A QUANTIDADE DE CHUVA E = %.2lf", mm);
    return 0;
}