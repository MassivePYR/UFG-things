#include<stdio.h>

int main(){
    double mtP=0,pMM=0,pmdoisA=0,nascidos=0,cM=0,ct=0,h=0,m=0,sexo=0;
    scanf("%lf",&nascidos);
    while(scanf("%lf %lf",&sexo ,&cM) != EOF){
        if(sexo==1){
            if(cM<=24){pmdoisA++;}
            h++;
        }else if(sexo==2){
        if(cM<=24){pmdoisA++;}
            m++;
    }
    mtP=(h+m);
    }
    printf("PORCENTAGEM DE MORTOS = %.2lf\n",(mtP/nascidos)*100);
    printf("PORCENTAGEM DE MASCULINOS MORTOS = %.2lf\n",(h/nascidos)*100);
    printf("PORCENTAGEM DE ATE 24 MESES = %.2lf\n",(pmdoisA/nascidos)*100);
}