#include <stdio.h>
#include <stdlib.h>

int i, j;
void Scn (int *, int);
void uniao (int *, int, int*, int);
void intersecao (int *, int, int *, int, int *, int *);

int main (){
    int con = 0;
    int tA, tB, tI;
    while(1){
        scanf("%d", &tA);
        if(tA>=1 && tA<=100){
            break;
        }
    }
    while(1){
        scanf("%d", &tB);
        if(tB>=1 && tB<=100){
            break;
        }
    }
    tI = tA + tB;
    int A[tA], B[tB], I[tI];
    Scn(A, tA);
    Scn(B, tB);
    //calcula a intersecao
    intersecao (A, tA, B, tB, I, &con);
    //calcula e imprime a uniao
    uniao(A, tA, B, tB);
    //imprime a intersecao
    printf("(");
        
    for(i=0; i<con; i++){   
        if(i!=0 && i+1<=con){
            printf(",");
        }
        printf("%d", I[i]);
    }
    printf(")");
}
void Scn (int *V, int n){
    for(i=0; i<n; i++){
        scanf("%d", V+i);
        for(j=0; j<i; j++){
            if(V[j] == V[i]){
                i--;
                break;
            }
        }
    }
}
 
void uniao (int *A, int a, int *B, int b){
    int u, j;
    u = a + b;
    int U[u];
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            if(A[i] == B[j]){
                B[j] = -1;
            }
        }
    }
    for(i=0; i<a; i++){
        U[i] = A[i];
    }
    for(i=0; i<b; i++){
        U[i+a] = B[i];
    }
    printf("(");
    for(i=0; i<u; i++){
        if(U[i] != -1){
            if(i>0 && i+1!=-1){
                printf(",");
            }
            printf("%d", U[i]);
        }
    }
    printf(")\n");
}
void intersecao (int *A, int a, int *B, int b, int *I, int *con){
    int x = 0;
    if(a>b){
        for(i=0; i<a; i++){
            for(j=0; j<b; j++){
                if(A[i] == B[j]){
                    I[x++] = A[i];
                }
            }
        }
        *con = x;
    }
    if(a<b){
        for(i=0; i<b; i++){
            for(j=0; j<a; j++){
                if(A[j] == B[i]){
                    I[x++] = B[i];
                }
            }
        }
        *con = x;
    }
}