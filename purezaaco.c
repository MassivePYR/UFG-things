#include<stdio.h>
#include<math.h>
int main(){
//conteudo<7 ,Dureza Rockwell >50 ,Resistencia>80000psi;        
    int carbono, dureza, resistencia, a, b, c, total;
    carbono = 0, dureza = 0, resistencia = 0, a = 0, b = 0, c = 0, total = 0;
    scanf("%i %i %i", &carbono, &dureza, &resistencia);
    if(carbono<7){
        a=10;
    }
    if(dureza>50){
        b=9;
    }
    if(resistencia>80000){
        c=8;
    }
    total=(a+b+c);
    if(total==27){
        printf("ACO DE GRAU = 10\n");
    }else if(total==19){
        printf("ACO DE GRAU = 9\n");
    }else if(total==10){
        printf("ACO DE GRAU = 8\n");
    }else if(total==8){
        printf("ACO DE GRAU = 7\n");
    }else if(total==0){
        printf("ACO DE GRAU = 7\n");
    }
    return 0;
}