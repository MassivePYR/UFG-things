
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no{
    int valor;                  //por enquanto é só uma lista encadeada
    struct no *prox;
}no;

typedef struct pilha{
    no *topo;                   //topo da pilha
}pilha;
