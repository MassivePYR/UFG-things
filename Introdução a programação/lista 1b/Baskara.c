#include<stdio.h>
#include<math.h>
// bora agora é baskara mesmo
int AoQ(int numero) {
    return numero*numero;
}
float SquareRoot(float numero){
    return sqrtf(numero);
}

int main(){
    float a=0.0, b=0.0, c=0.0, v=0.0, x1=0.0, x2=0.0;
    double raiz=0.0;
    scanf("%f %f %f",&a,&b,&c);
        v = pow(b,2)-(4*a*c);
        raiz = SquareRoot(v);
        if (raiz >= 0)
        {
            x1 = ((-1*b)+raiz)/(2*a);
            x2 = ((-1*b)-raiz)/(2*a);

            printf("\n baskara = X'=%.2lf, X''= %.2lf", x1, x2);
            printf(" Raiz= %.2lf", raiz);
        }
        else{
            printf("Nao existem raizes para 'delta' negativo");
        }

        
return 0;
}