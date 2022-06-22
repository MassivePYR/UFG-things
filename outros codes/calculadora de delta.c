#include<stdio.h>
#include<math.h>

int aoQuadrado(int numero) {
    return numero*numero;
}

int main(){
    float a=0.0, b=0.0, c=0.0, v=0.0;

    printf("Calculadora de delta!");
    printf("\n Insira o valor referente a A: \n");
    scanf("%f",&a);
        
        printf("Insira o valor referente a B: \n");
        scanf("%f",&b);

        printf("Insira o valor referente a C: \n");
        scanf("%f",&c);

        v = pow(b,2)-4*a*c;
        
    printf("Delta = %f",v);
    

return 0;
}