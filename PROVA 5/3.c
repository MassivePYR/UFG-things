#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int i,j;
char aux1[101];
int aux2,aux3;
double aux4,aux5;

int main(){
    struct clientes
    { 
        char nome[101];
        int cpf;
        int vezes;
        double val_med;
        double atr;
    };

    int quantos;
    scanf("%d",&quantos);

    struct clientes[quantos];
    
    for(i=0;i<quantos;i++){
        getchar();
        scanf("%s",clientes[i].nome);
        getchar();
        scanf("%d",&clientes[i].cpf);
        getchar();
        scanf("%d",&clientes[i].vezes);
        getchar();
        scanf("%lf",&clientes[i].val_med);
        getchar();
        scanf("%lf",&clientes[i].atr);
    }
    //reordena struct
    for(i=0;i<quantos;i++){
        for(j=0;j<quantos;j++){
            if(clientes[i].vezes*clientes[i].val_med>clientes[j].vezes*clientes[j].val_med||clientes[i].vezes*clientes[i].val_med==clientes[j].vezes*clientes[j].val_med&&clientes[i].atr<clientes[j].atr||clientes[i].vezes*clientes[i].val_med==clientes[j].vezes*clientes[j].val_med&&clientes[i].atr==clientes[j].atr&& cpf[i]>cpf[j]){
                aux1=clientes[i].nome;
                aux2=clientes[i].cpf;
                aux3=clientes[i].vezes;
                aux4=clientes[i].val_med;
                aux5=clientes[i].atr;
                clientes[i].nome=clientes[j].nome;
                clientes[i].cpf=clientes[j].cpf;
                clientes[i].vezes=clientes[j].vezes;
                clientes[i].val_med=clientes[j].val_med;
                clientes[i].atr=clientes[j].atr;
                clientes[j].nome=aux1;
                clientes[j].cpf=aux2;
                clientes[j].vezes=aux3;
                clientes[j].val_med=aux4;
                clientes[j].atr=aux5;
            }
        }
    }
    //imprime struct
    for(i=0;i<quantos;i++){
        printf("%s\n %d\n %d\n %.2lf\n %.2lf\n \n",clientes[i].nome,clientes[i].cpf,clientes[i].vezes,clientes[i].val_med,clientes[i].atr);
    }
}