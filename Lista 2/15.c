#include<stdio.h>
#include<math.h>

int main(){
    int testes,n,i,j,distance,mDistance=10001,comparacoes=0;
    scanf("%d", &testes);
    while(testes--){
        scanf("%d", &n);
        int vet[n];
        for(i = 0; i < n; i++){
            scanf("%d", &vet[i]);
        }
        i=0,j=0,mDistance=10001;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                distance = abs(vet[i] - vet[j]);
                if(mDistance>distance && i!=j){
                    mDistance = distance;
                }
            }
            j=0;
        }
        comparacoes = (n-1)*(n/2);
        printf("%d %d\n",mDistance,comparacoes);
    }
}