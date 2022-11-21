#include <stdio.h>
//esse programa é um exemplo de como conseguir uma úcera ele também é um exemplo de como a humanidade está perdida. Deixo aqui o amargor do lider de grupo.

void imprime(int a, int b, float matriz[a][b])
{
    int i, j;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%.1f ", matriz[i][j]);
        }
        printf("\n");
    }
}

void ordemMatrizDecrescente(int i, int j, float matriz[i][j]) { // Argumentos necessarios: i = linha; j = coluna; matriz (sem os colchetes)
    int a, b, c, d;                                              // A funcao ja imprime a matriz em ordem decrescente
    float aux;
    for(a = 0; a < i; a++){
        for(b = 0; b < j; b++){
            for(c = 0; c < i; c++){
                for(d = 0; d < j; d++){
                    if(matriz[a][b] > matriz[c][d]){
                        aux = matriz[a][b];
                        matriz[a][b] = matriz[c][d];
                        matriz[c][d] = aux;
                    }
                }
            }
        }
    }
    printf("\n\nOrdem Decrescente\n\n");
    for(a = 0; a < i; a++){
        for(b = 0; b < j; b++){
            printf("%.2f ", matriz[a][b]);
        }
        printf("\n");
    }
}

void LerMenoreImprimir(int linha, int coluna,float m[linha][coluna]){
    int aux,aux1,i,j;
    flutuante menor = 10000;
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            if(menor>m[i][j]){
                menor=m[i][j];
                aux=i;
                aux1=j;
            }
        }
    }
    printf("\nO menor valor é %.1f, que esta na linha %de coluna %d\n",menor,aux,aux1);
} 

void ordenaMatriz(int altura, int largura, float matriz[altura][largura]){
    int i, j, k, l;
        for(i=0; i < altura; i++){
            for(j=0; j < largura; j++){
                for(k=0; k < altura; k++){
                    for(l=0; l < largura; l++){
                        if(matriz[i][j] < matriz[k][l]){
                            float auxiliar = matriz[i][j];
                            matriz[i][j] = matriz[k][l];
                            matriz[k][l] = auxiliar;
                        }
                    }
                }
            }
        }
    printf("\n----  Resultado apos a ordenacao ----");
    for (i = 0; i < altura; i++){
        for (j = 0; j < largura; j++){
            printf("%.2f", matriz[i][j]);
        }
    }
}

void imprimirMaior(int linha, int coluna, float matriz[linha][coluna])
{
    float maior = 0;
	int aux, aux1;
    for (i = 0; i < linha; i++){
        for (j = 0; j < coluna; j++){
            if (matriz[i][j] > maior){
                maior = matriz[i][j];
                aux = i;
                aux1 = j;
            }
        }
    }
    printf("\nO maior valor e %.1f, que esta na linha %d e coluna %d\n\n", maior, aux, aux1);
}

void repetido(int linha, int coluna, float mat[linha][coluna]){  
    int i, j, l, c;
        for(i=0; i<linha; i++){
            for(j=0; j<coluna; j++){
                for(l=i; l<linha; l++){
                    for(c=j; c<coluna; c++){
                        if(mat[i][j] == mat[l][c]  && (i!=l || j!=c)){
                            printf("repetido: [%.2f] (linha:%d , coluna: %d) e [%.2f] (linha:%d , coluna: %d)\n", mat[i][j],i,j, mat[l][c], l , c);
                        }
                    }
                }
            }
        }
    printf("\n \n");
}
