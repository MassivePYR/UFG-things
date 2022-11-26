#include<stdio.h>
int main(){

    int cod=0, qtd=0, mpvenda=0, mcod=0, mqtd=0, contmdez=0, between=0, contmvinte=0;
    double pcompra=0, mlucro=0, lucro=0, pvenda=0, comptotal=0, ventotal=0, lucrototal=0, lcrPercent=0 ,percentC;

    while(scanf("%d %lf %lf %d", &cod, &pcompra, &pvenda, &qtd) != EOF){
        lucro = ((pvenda-pcompra)*qtd);
        percentC = (lucro/(pcompra*qtd))*100;
        comptotal+=pcompra*qtd;
        ventotal+=pvenda*qtd;
        lucrototal+=lucro;
        
        if(percentC<10){
            contmdez++;
        }
        if(percentC>10 && percentC<=20){
            between++;
        }
        if(percentC>20){
            contmvinte++;
        }
        if(qtd>mqtd){
            mqtd=qtd;
            mpvenda=cod;
        }
        if(lucro>mlucro){
            mlucro=lucro;
            mcod=cod;}
    }

    lcrPercent = (lucrototal/comptotal)*100;
    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", contmdez);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", between);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", contmvinte);
    printf("Codigo da mercadoria que gerou maior lucro: %d\n", mcod);
    printf("Codigo da mercadoria mais vendida: %d\n", mpvenda);
    printf("Valor total de compras: %.2lf, valor total de vendas: %.2lf  e percentual de lucro total: %.2lf%%\n", comptotal, ventotal, lcrPercent);
    return 0;
}