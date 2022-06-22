#include<stdio.h>
#include<math.h>
int main(){
    int aluminio=100;
    double ac=0, al=0, at=0, raio=0, altura=0, ct=0, pi=3.14159;
    scanf("%lf",&raio);
    scanf("%lf",&altura);
    ac=(raio*raio)*pi;
    al=(2*pi)*raio*altura;
    at=(2*ac)+al;
    ct=at*aluminio;
    printf("O VALOR DO CUSTO E = %.2lf\n", ct);
    return 0;
}