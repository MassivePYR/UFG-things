#include<stdio.h>
#include<math.h>

void main(){
    int aluminio = 100;
    float pi = 3.14159;
    double acirculo, alado, latacompleta, raio, altura, custo;
    //medidos em metros
    scanf("%lf",&raio );
    scanf("%lf",&altura );
    acirculo=(pi*(raio*raio));
    alado = 2*(pi*(raio*altura));
    printf("verificacao acirculo %.2lf\n", &acirculo);
    printf("verificacao alado %.2lf\n", &alado);
    //latacompleta=2*acirculo+alado;
    //custo = latacompleta*aluminio;


    printf("O VALOR DO CUSTO E = %.2lf\n", &custo);

}