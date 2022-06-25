#include<stdio.h>
#include<math.h>
int main(){
    char tipodeconta;
    int i=0,R=1,I=3,C=2,u=0;
    double aux=0, consumo=0;
    scanf("%d %lf %c", &u, &consumo, &tipodeconta);
    if(tipodeconta=='R'){
        i=R;
    }else if(tipodeconta=='C'){
        i=C;
    }else if(tipodeconta=='I'){
        i=I;
    }
    switch (i)
    {
        case 2:
            aux = (( consumo - 80 ) * 0.25)+500;
            printf("CONTA = %d\n", u);
            printf("VALOR DA CONTA = %.2lf", aux);
            break;
        case 3:
            aux = (( consumo - 100 ) * 0.04)+800;
            printf("CONTA = %d\n", u);
            printf("VALOR DA CONTA = %.2lf", aux);
            break;
        case 1:
            aux = ( consumo * 0.05 )+5;
            printf("CONTA = %d\n", u);
            printf("VALOR DA CONTA = %.2lf", aux);
            break;
        default:
            break;
    }

    return 0;

}