//teste 11 - lista 1c
#include<stdio.h>
#include<math.h>
int main (){
    unsigned int a,b,maior,entradas, tudo,d,n,val2,val1,h,e,aux, resultado;
    scanf("%u %u", &entradas, &n);

    aux=n;
    while(entradas--) {
        scanf("%u", &val1);
        if(val1>n){
            resultado++;

        }else if(a<b){
                d=resultado;
                resultado=0;
            }
        if(d>e){
            printf("%u\n", d);
        }else{
            printf("%u\n", e);
        }

        aux = val1;
    }
    printf("o comprimento do segmento crescente maximo e: %u\n", maior);

}