#include<stdio.h>
//considerando a entrada de valores inteiros, ordene estes valores segundo o seguite criterio
//os numeros negativos devem aparecer antes dos positivos em ordem decrescente
//apos os numeros negativos, devem aparecer os valores positivos em ordem crescente

int main(){
    int n;
    scanf("%d", &n);
    if(n>0&&n<100000){
        int v[n];
        int i, j, aux;
        for(i=0; i<n; i++){
            scanf("%d", &v[i]);
        }
        for(i=0; i<n; i++){
            for(j=i+1; j<n; j++){
                if(v[i]>v[j]){
                    aux=v[i];
                    v[i]=v[j];
                    v[j]=aux;
                }
            }
        }
        for(i=0; i<n; i++){
            for(j=i+1; j<n; j++){
                if(v[i]<v[j]&&v[j]<0){
                    aux=v[i];
                    v[i]=v[j];
                    v[j]=aux;
                }
            }
            printf("%d\n", v[i]);
        }
    }
    
}