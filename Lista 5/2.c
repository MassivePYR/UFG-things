#include<stdio.h>
#include<string.h>
int i,aux;

int main (){
    int feiras,qnts;
    scanf("%d", &feiras);
    while(feiras--){//quantas feiras
        double soma = 0;// zera somatorio
        scanf("%d", &qnts);//quantos produtos
        struct{char item[50]; double preco; }produtos[qnts];
        for(i=0;i<qnts;i++){
            scanf("%s %lf", &produtos[i].item, &produtos[i].preco);
        }

        int comprados;//quantos produtos foram comprados
        scanf("%d", &comprados);
        while(comprados--){
            char item[50]; int qnt;
            scanf("%s %d", &item, &qnt);
            for(i=0;i<qnts;i++){
                if(strcmp(item,produtos[i].item)==0){
                    soma+=qnt*produtos[i].preco;
                }
            }
        }
        printf("R$ %.2lf\n", soma);
    }
}