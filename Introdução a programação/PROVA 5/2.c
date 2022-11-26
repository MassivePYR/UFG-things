//Vetor de int dinamico
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int i,j;

short int criaVector(struct vector *s){
    struct vector[(int*)malloc(5*sizeof(int))];
    if(s->vector==NULL){
        return 0;
    }
    *s vector+=5;
    return 1;
}
short int insereFim(struct vector *s, int v){
    s->vector=(int*)realloc(s->vector,(s->size+1)*sizeof(int));
    if(s->vector==NULL){
        return 0;
    }
    s->vector[s->size]=v;
    s->size++;
    return 1;
    
}
void imprimeVector(struct vector *s){
    strlen();
    for(i=0;i<s->size;i++){
        printf("%d ",s->vector[i]);
    }
    printf("\n");
    
}
void liberaVector(struct vector *s){
    free(s);
}

int main(){
    char c;
    while(scanf("%c",&c)!=EOF){
    if(c="c"){
        struct vector s;
        int v;
        while(scanf("%d",&v)!=EOF){
            if(insereFim(&s,v)==0){
                printf("Erro ao inserir no vector");
                return 0;
            }
        }
        imprimeVector(&s,v);
        liberaVector(&s);
    }
    else if(c="p"){
        struct vector s;
        int v;
        if(criaVector(&s)==0){
            printf("Erro ao criar o vector");
            return 0;
        }
        while(scanf("%d",&v)!=EOF){
            if(insereFim(&s,v)==0){
                printf("Erro ao inserir no vector");
                return 0;
            }
        }
        imprimeVector(&s,v);
        liberaVector(&s);
    }
    else if(c="i"){
        struct vector s;
        int v;
        if(criaVector(&s)==0){
            printf("Erro ao criar o vector");
            return 0;
        }
        while(scanf("%d",&v)!=EOF){
            if(insereFim(&s,v)==0){
                printf("Erro ao inserir no vector");
                return 0;
            }
        }
        imprimeVector(&s,v);
        liberaVector(&s);
    }
    else if(c="r"){
        struct vector s;
        int v;
        if(criaVector(&s)==0){
            printf("Erro ao criar o vector");
            return 0;
        }
        while(scanf("%d",&v)!=EOF){
            if(insereFim(&s,v)==0){
                printf("Erro ao inserir no vector");
                return 0;
            }
        }
        imprimeVector(&s,v);
        liberaVector(&s);
    }
    }
    int *vetor;
    int tamanho;
    vetor=(int*)malloc(tamanho*sizeof(int));


}