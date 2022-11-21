#include<stdio.h>
void flush_buffer(){ 
    int ch;
    while((ch = fgetc(stdin)) != EOF){} 
}

void leituraLinhaColuna(int *linhas, int *colunas)// envia o endereço das variáveis de linha e de coluna 
{ 
    FILE *fp;
    fp = fopen("matriz34.txt", "rt");
    fscanf(fp, "%d %d", linhas, colunas);
    fclose(fp);
}

void leituraMatriz(int linhas, int colunas, float *matriz)// necessita declarar matriz antes | envia linha, coluna e nome da matriz declarada ( somente o nome )
{
    int i, j; // argumentos: quantidade de linha, coluna e matriz
    FILE *fp;
    fp = fopen("matriz34.txt", "rt");

    char buffer[100];
    fgets(buffer, 100, fp); // le a primeira linha de novo para nao interferir na atribuicao dos valores da matriz

    for (i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            fscanf(fp, "%f", &matriz[i][j]);
            if(j=colunas){j=0;}
        }
    }
    fclose(fp);
}

void imprime(int linhas, int colunas, float matriz[linhas][colunas]){
    int i, j;

    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            printf("%.1f ", matriz[i][j]);
            if(j==colunas){j=0;}
        }
        printf("\n");
    }
    printf("Imprimiu!\n");
}

void crescente(int linhas, int colunas, float matriz[linhas][colunas]){
    int i, j, k, l;

    for (i=0; i < linhas; i++){
        for (j=0; j < colunas; j++){
            for (k=0; k < linhas; k++){
                for (l=0; l < colunas; l++){

                    if(matriz[i][j] < matriz[k][l]){
                    float auxiliar = matriz[i][j];
                    matriz[i][j] = matriz[k][l];
                    matriz[k][l] = auxiliar;
                    }
                }
            }
        }
    }

  printf("\nEm ordem crescente\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%.2f", matriz[i][j]);
        }
    }
}

void decrescente(int linhas, int colunas, float matriz[linhas][colunas]){
    int a, b, c, d;                                              // A funcao ja imprime a matriz em ordem decrescente
    float aux;

    for(a=0; a<linhas; a++){
        for(b=0; b<colunas; b++){ 
            for(c=0; c<linhas; c++){
                for(d=0; d<colunas; d++){

                    if(matriz[a][b] > matriz[c][d]){
                        aux = matriz[a][b];
                        matriz[a][b] = matriz[c][d];
                        matriz[c][d] = aux;
                    }
                }
            }
        }
    }
    printf("\n\nEm ordem descrescente\n\n");
    for (a=0; a<linhas; a++){
        for (b=0; b<colunas; b++){
            printf("%.1f ", matriz[a][b]);
        }
        printf("\n");
    }
}

void maior(int linhas, int colunas, float matriz[linhas][colunas]){
    float maior = 0;
	int aux, aux1;

    for (i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            if (matriz[i][j] > maior){
                maior = matriz[i][j];
                aux = i;
                aux1 = j;
            }
        }
    }
    printf("\nO maior valor e %.1f, que esta na linha %d e coluna %d\n\n", maior, aux, aux1);
}

void menor(int linhas, int colunas, float matriz[linhas][colunas]){
    int aux,aux1,i,j;
    float menor = 10000;
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            if(menor>matriz[i][j]){
                menor=matriz[i][j];
                aux=i;
                aux1=j;
            }
        }
    }
    printf("\nO menor valor é %.1f, que esta na linha %d e coluna %d\n", menor, aux, aux1);
}

void repetidos(int linhas, int colunas, float matriz[linhas][colunas]){
    int i, j, l, c;
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            for(l=i; l<linhas; l++){
                for(c=j; c<colunas; c++){
                    if(matriz[i][j] == matriz[l][c]  && (i!=l || j!=c)){
                        printf("repetido: [%.1f] (linha:%d , coluna: %d) e [%.1f] (linha:%d , coluna: %d)\n", matriz[i][j],i,j, matriz[l][c], l , c);
                    }
                }
            }
        }
    }
    printf("\n \n");
}

void sair(){
    printf("Obrigado, espero ter sido útil!\n\n");
}

int main(){

    int linhas=0, colunas=0;
    leituraLinhaColuna(&linhas, &colunas);

    float matriz[linhas][colunas];
    leituraMatriz(linhas, colunas, matriz);

    int continuar=1;
    do{
        printf("\n\tEscolha o que deseja fazer\n\n");
        printf("1. Imprimir a Matriz\n");
        printf("2. Valores da Matriz em ordem Crescente\n");
        printf("3. Valores da Matriz em ordem Decrescente\n");
        printf("4. Maior Valor presente na Matriz\n");
        printf("5. Menor Valor presente na Matriz\n");
        printf("6. Existem Valores Repetidos na Matriz?\n");
        printf("0. Sair\n\n");

        scanf("%d", &continuar);
        printf("\n");

        switch(continuar){
            case 1:
                imprime(linhas, colunas, matriz[linhas][colunas]);
                break;

            case 2:
                crescente(linhas, colunas, matriz[linhas][colunas]);
                break;

            case 3:
                decrescente(linhas, colunas, matriz[linhas][colunas]);
                break;

            case 4:
                maior(linhas, colunas, matriz[linhas][colunas]);
                break;

            case 5:
                menor(linhas, colunas, matriz[linhas][colunas]);
                break;

            case 6:
                repetidos(linhas, colunas, matriz[linhas][colunas]);
                break;

            case 0:
                sair();
                break;

            default:
                printf("\nDigite uma opcao valida\n");
        }
    }while(continuar);

    return 0;
}