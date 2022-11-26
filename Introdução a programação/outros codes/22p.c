#include <stdio.h>
#include <string.h>
#include <math.h>
int i;
void StoInt(int *, char *, int);
void Mnum(int *, int, int);

int main (){
    int n, nF;
    while(1){    
        scanf("%d %d", &n, &nF);
        if(n==0){
            return 0;
        }
        char S[n+1];
        scanf("%s", S);
        getchar();
        int N[n];
        StoInt(N, S, n);
        Mnum(N, n, nF);
        printf("\n");
    }
}

void StoInt (int *N, char *S, int n){
    for(i=0; i<n; i++){
        switch(S[i]){

            case '0': N[i] = 0;
            break;

            case '1': N[i] = 1;
            break;

            case '2': N[i] = 2;
            break;

            case '3': N[i] = 3;
            break;

            case '4': N[i] = 4;
            break;

            case '5': N[i] = 5;
            break;

            case '6': N[i] = 6;
            break; 
            
            case '7': N[i] = 7;
            break;

            case '8': N[i] = 8;
            break;

            case '9': N[i] = 9;
            break;

        }
    }
}
void Mnum (int *V, int n, int nf){
    int inicio = 0;
    int contador = nf;
    int maior = -1;
    int imaior;
    int MNUM[nf], index = 0;
    while(contador--){
        for(i=inicio; i<=n-nf; i++){
            if(V[i]>maior){
                maior = V[i];
                imaior = i;
            }
        }
        MNUM[index++] = maior;
        inicio = imaior+1;
        nf--;
        maior = -1;
    }
    for(i=0; i<index; i++){
        printf("%d", MNUM[i]);
    }
}