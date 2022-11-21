#include<stdio.h>
#include<math.h>

int AoQ(int numero) {
    return numero*numero;
}

float SquareRoot(float numero){
    return sqrtf(numero);
}

int main(){
    float a=0.0, b=0.0, c=0.0, v=0.0, x1=0.0, x2=0.0;
    double raiz=0.0,x1_real=0.0,x2_real=0.0,x1_imag=0.0,x2_imag=0.0;
    scanf("%f %f %f",&a,&b,&c);
        v = pow(b,2)-(4*a*c);
        raiz = SquareRoot(v);
        if (raiz >= 0){
            x1 = ((-1*b)+raiz)/(2*a);
            x2 = ((-1*b)-raiz)/(2*a);
            printf("\nx1=%.2lf\nx2= %.2lf\n", x1, x2);
        }else{
            v=v*(-1);
            x1_real = (-1*b)/(2*a);
            x1_imag = (SquareRoot(v))/(2*a);
            x2_real = (-1*b)/(2*a);
            x2_imag = (-1*SquareRoot(v))/(2*a);
            printf("\nx1=%.2lf%.2lfi\nx2= %.2lf%.2lfi\n", x1_real, x1_imag, x2_real, x2_imag);
        }

return 0;
}