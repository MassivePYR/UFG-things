#include<stdio.h>
#include<math.h>

int MDC(int a, int b){
    int resto;
    while(b!=0){
        resto = a%b;
        a = b;
        b = resto;
    }
    return a;
}
struct tRacional{int numerador; int denominador;};

struct tRacional negativo(struct tRacional racional){
    racional.numerador = racional.numerador*(-1);
    return racional;
}

struct tRacional soma(struct tRacional racional1, struct tRacional racional2){
    struct tRacional racional3;
    racional3.numerador = (racional1.numerador*racional2.denominador)+(racional2.numerador*racional1.denominador);
    racional3.denominador = racional1.denominador*racional2.denominador;
    return racional3;
}
struct tRacional mult(struct tRacional racional1, struct tRacional racional2){
    struct tRacional racional3;
    racional3.numerador = racional1.numerador*racional2.numerador;
    racional3.denominador = racional1.denominador*racional2.denominador;
    return racional3;
}
struct tRacional div(struct tRacional racional1, struct tRacional racional2){
    struct tRacional racional3;
    racional3.numerador = racional1.numerador*racional2.denominador;
    racional3.denominador = racional1.denominador*racional2.numerador;
    return racional3;
}
void reduzFracao(struct tRacional *racional){
    int mdc = MDC(racional->numerador, racional->denominador);
    racional->numerador = racional->numerador/mdc;
    racional->denominador = racional->denominador/mdc;
}
int main(){
    struct tRacional racional1, racional2, racional3;
    scanf("%d %d %d %d", &racional1.numerador, &racional1.denominador, &racional2.numerador, &racional2.denominador);
    racional3 = soma(racional1, racional2);
    reduzFracao(&racional3);
    printf("%d %d", racional3.numerador, racional3.denominador);