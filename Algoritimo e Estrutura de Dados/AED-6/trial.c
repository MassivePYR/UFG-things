/*
FMF
AED 1 Turma 2022.2!
Estrutura do Código:
- bibliotecas
- estrutura de dados
- função (imprime) para verificar a ordenação
- função (compare_nome) necessária para o Quick Sort do C (!!!)
- (seria possível criar a "compare_inteiros()"?! Rsss...)
- main:
        - leitura dos dados no arquivo CSV separados por ponto e vírgula! (Poderia estar em uma função! Rsss...)
        - Quick Sort do C chamando a (compare_nomes)
        - imprime
        - e sem liberação de memória -> free()! (Rsss...)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
     char categoria;
     char *nome;
     int freq_n;
     char *grupo;
     int freq_g;
 } Dado;

//struct Dado nomes[100800]; // fixar o tamanho máximo ou alocar dinâmicamente?
int i = 0;
char linha [500];

// imprime os 10 primeiros e os 10 últimos para verificação da ordenação
void imprime(Dado array[], int size) {

  printf("\nOs primeiros 10:\n");
  for (int i = 0; i < 10; ++i) {
    printf("%-30s %d \n", array[i].nome, array[i].freq_n);
  }
  printf("\n");

  printf("Os ultimos 10:\n");
  for (int i = (size-10); i < size; ++i) {
    printf("%-30s %d \n", array[i].nome, array[i].freq_n);
  }
  printf("\n");
}

// comparar strings
int compare_nomes(const void *s1, const void *s2)
    {
      Dado *e1 = (Dado *)s1;
      Dado *e2 = (Dado *)s2;
      int compara_nome = strcmp(e1->nome, e2->nome);
      if (compara_nome == 0)  /* se mesmo nome? */
        return e1->freq_n - e2->freq_n;
      else
        return compara_nome; // return -compara_nome;
    }



int main()
{   

    // abre arquivo
    FILE* fp = fopen("nomes.csv", "r");
    if (fp == NULL) 
    {
        printf("Falhou!");
        return(1);
    }

    fgets(linha, 500, fp);
    printf("\n Primeira linha do Arquivo:\n",linha);
    printf("%s\n",linha);

    int length = 1;
    Dado *nomes;
    nomes = malloc(sizeof(Dado)*length);


// https://labcpp.com.br/parser-csv-em-c-e-c/

    while (!feof(fp)) {
  
        char cat = 'M';
        char fn[30] = " ";
        int frn = 1;
        char gn[30] = " ";
        int frg = 1;
        int nfields = fscanf(fp, "%c;%29[^;];%d;%29[^;];%d\n", &cat, fn, &frn, gn , &frg);

        if (nfields != 5){
            printf("\n %d", i);
            break;
        }

        // alocação dinâmica das strings...
        nomes[i].nome =  malloc(sizeof(char)*30);
        nomes[i].grupo = malloc(sizeof(char)*30);
        // copiando os dados lidos para a struct... para facilitar a leitura! Rsss...
        nomes[i].categoria = cat;
        nomes[i].freq_n = frn;
        nomes[i].freq_g = frg;
        memcpy(nomes[i].nome,fn, sizeof(fn));
        memcpy(nomes[i].grupo,gn, sizeof(gn));
        
        i++;
        length++; //lenght = i+1 sempre! Rsss...
        nomes = realloc(nomes, sizeof(Dado)*length);
    }
    fclose(fp);

// Ordenar: definir a chave e aplicar a função correspondente

    // tamanho do array nomes: curiosidades
    printf("\nCuriosidades: tamanho de uma struct = %d  ,  i= %d  ,  lenght= %d , ultimo nome lido = %s\n", sizeof(nomes[0]), i, length, nomes[i-1].nome);

    int size = i;
    qsort(nomes, size, sizeof(nomes[0]), compare_nomes); 
  
    imprime(nomes, size);

    // faltando free arrays e free struct  ! Rsss...

    return 0;

}

// Valeu!