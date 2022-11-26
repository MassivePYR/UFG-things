#include <stdio.h>

int i, j;
void countingsort (int *, int, int);
void Prt(int *, int);
int main (){
    while(1){    
        int n, maior = 0;
        scanf("%d", &n);
        if(n==0){
            return 0;
        }
        int V[n];
        for(i=0; i<n; i++){
            scanf("%d", V+i);
            if(V[i]>maior){
                maior = V[i];
            }
        }
        countingsort(V, n, maior);
        Prt(V, n);
    }
}
void countingsort (int *V, int n, int m){
    int Count[m], Ord[n];
    for(i=0; i<=m; ++i){
        Count[i] = 0;
    }
    for(i=0; i<n; i++){
        Count[V[i]]++;
    }
    for(i=1; i<=m; i++){
        Count[i] += Count[i-1];
    }
    for(i=n-1; i>=0; i--){
        Ord[Count[V[i]]-1] = V[i];
        Count[V[i]]--;
    }
    for(i=0; i<n; i++){
        V[i] = Ord[i];
    }
}
void Prt (int *V, int n)
{
    for(i=0; i<n; i++){
        printf("%d ", V[i]);
    }
    printf("\n");
}