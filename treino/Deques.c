#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int info;
    struct node *next;
}node;

typedef struct deque{
    node *front;
    node *rear;
}deque;

void init(deque *d){
    d->front = NULL;
    d->rear = NULL;
}

int empty(deque *d){
    return (d->front == NULL);
}

void addFrente(deque *d, int x){
    node *p = (node*)malloc(sizeof(node));
    p->info = x;
    p->next = d->front;
    d->front = p;
    if(d->rear == NULL)
        d->rear = p;
}

void addFim(deque *d, int x){
    node *p = (node*)malloc(sizeof(node));
    p->info = x;
    p->next = NULL;
    if(d->rear == NULL)
        d->front = p;
    else
        d->rear->next = p;
    d->rear = p;
}

int removeFrente(deque *d){
    if(empty(d)){
        printf("Deque vazio!");
        exit(1);
    }
    node *p = d->front;
    int x = p->info;
    d->front = p->next;
    if(d->front == NULL)
        d->rear = NULL;
    free(p);
    return x;
}

int removeFim(deque *d){
    if(empty(d)){
        printf("Deque vazio!");
        exit(1);
    }
    node *p = d->front;
    node *q = NULL;
    while(p->next != NULL){
        q = p;
        p = p->next;
    }
    int x = p->info;
    if(q == NULL)
        d->front = d->rear = NULL;
    else{
        q->next = NULL;
        d->rear = q;
    }
    free(p);
    return x;
}

int main(){
    deque d;
    init(&d);
    addFrente(&d, 1);
    addFrente(&d, 2);
    addFrente(&d, 3);
    addFrente(&d, 4);
    addFrente(&d, 5);
    addFim(&d, 6);
    addFim(&d, 7);
    addFim(&d, 8);
    addFim(&d, 9);
    addFim(&d, 10);
    while(!empty(&d))
        printf("%d ", removeFrente(&d));
    printf(" ");
    while(!empty(&d))
        printf("%d ", removeFim(&d));
    return 0;
}

//Output:
//5 4 3 2 1 6 7 8 9 10