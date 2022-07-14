#include <stdio.h>

int main()
{
    int n, i, buscas, amostra[100000];
    scanf("%d", &n);//quantidade de elementos
    for (i = 0; i < n; i++){
        scanf("%d",&amostra[i]);//leitura dos elementos
        }
    scanf("%d", &buscas);// quantidade de buscas
    for (i = 0; i < buscas; i++){
        int busca;
        scanf("%d", &busca);//leitura das buscas
        int j = 0;
        while (j < n && amostra[j] != busca){
            j++;
        }
        if (j < n){
            printf("ACHEI\n", j);
        }
        else{
            printf("NAO ACHEI\n");
        }
    }
}