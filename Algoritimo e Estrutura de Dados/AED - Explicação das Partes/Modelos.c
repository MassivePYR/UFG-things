//lista encadeada
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
typedef struct no{
    int valor;
    struct no *prox;
}no;

typedef struct lista{
    no *inicio;
    no *fim;
}lista;

void insere(lista *l, int valor){
    no *novo = (no*)malloc(sizeof(no));
    novo->valor = valor;
    novo->prox = NULL;
    if(l->inicio == NULL){
        l->inicio = novo;
        l->fim = novo;
    }else{
        l->fim->prox = novo;
        l->fim = novo;
    }
}

void imprime(lista *l){
    no *aux = l->inicio;
    while(aux != NULL){
        printf("%d ", aux->valor);
        aux = aux->prox;
    }
    printf("\n");
}

int main(){
    lista *l = (lista*)malloc(sizeof(lista));
    l->inicio = NULL;
    l->fim = NULL;
    insere(l, 1);
    insere(l, 2);
    insere(l, 3);
    insere(l, 4);
    insere(l, 5);
    imprime(l);
    return 0;
}
*/
//--------------------------------------------------
//pilha
///*
typedef struct no{
    int valor;
    struct no *prox;
}no;

typedef struct pilha{
    no *topo;
}pilha;

void push(pilha *p, int valor){
    no *novo = (no*)malloc(sizeof(no));
    novo->valor = valor;
    novo->prox = p->topo;
    p->topo = novo;
}

int pop(pilha *p){
    no *aux = p->topo;
    int valor = aux->valor;
    p->topo = aux->prox;
    free(aux);
    return valor;
}

//*/
//--------------------------------------------------
//fila
/*
typedef struct no{
    int valor;
    struct no *prox;
}no;

typedef struct fila{
    no *inicio;
    no *fim;
}fila;
*/
//--------------------------------------------------
//lista duplamente encadeada
/*
typedef struct no{
    int valor;
    struct no *prox;
    struct no *ant;
}no;

typedef struct lista{
    no *inicio;
    no *fim;
}lista;
*/
//--------------------------------------------------
//arvore
/*
typedef struct no{
    int valor;
    struct no *esq;
    struct no *dir;
}no;

typedef struct arvore{
    no *raiz;
}arvore;
*/
//--------------------------------------------------
//grafo
/*
typedef struct no{
    int valor;
    struct no *prox;
}no;

typedef struct grafo{
    no *inicio;
}grafo;
*/
//--------------------------------------------------
//heap
/*
typedef struct no{
    int valor;
    struct no *prox;
}no;

typedef struct heap{
    no *inicio;
}heap;
*/
//--------------------------------------------------
//hash
/*
typedef struct no{
    int valor;
    struct no *prox;
}no;

typedef struct hash{
    no *inicio;
}hash;
*/
//--------------------------------------------------


