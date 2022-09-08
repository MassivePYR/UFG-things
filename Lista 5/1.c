#include<stdio.h>
#include<string.h>
int i,j;

int main(){
    int testes=0, qntFracoes, cont=0;
    scanf("%d", &testes);
    while(testes--){
        cont++;
        printf("Caso de teste %d\n",cont);
        scanf("%d",&qntFracoes);

        struct fracao{ int numerador; int denominador;}fracao[qntFracoes];
        for(i=0;i<qntFracoes;i++){
            scanf("%d/%d",&fracao[i].numerador,&fracao[i].denominador);
        }
        int eqTrue = 0;
        for(i=0;i<qntFracoes;i++){
            for(j=i+1;j<qntFracoes;j++){
                double fra1 = (double)fracao[i].numerador/fracao[i].denominador;
                double fra2 = (double)fracao[j].numerador/fracao[j].denominador;
                if(fra1==fra2){
                    printf("%d/%d equivalente a %d/%d\n",fracao[i].numerador,fracao[i].denominador,fracao[j].numerador,fracao[j].denominador);
                    eqTrue++;
                }
            }
        }
        if(eqTrue==0){
                printf("Nao ha fracoes equivalentes na sequencia\n");
            }
    }
}