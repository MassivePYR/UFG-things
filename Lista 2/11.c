#include <stdio.h>

int main(){
    int i, k, n, mN = 0, meN = 10;
    scanf("%d", &n);
    int vet1[n];
    int vet2[n];
    for (i=0; i<n; i++){
        scanf("%d", &vet1[i]);
    }
    k = n - 1;
    for (i=0; i<n; i++){
        vet2[k] = vet1[i];
        k--;
    }
    for (i=0; i<n; i++){
        printf("%d ", vet1[i]);
    }
    printf("\n");
    for (i=0; i<n; i++){
        printf("%d ", vet2[i]);
    }
    printf("\n");
    for (i=0; i<n; i++){
        if (mN<vet1[i]){
            mN=vet1[i];
        }
        if (meN>vet2[i]){
            meN=vet2[i];
        }
    }
    printf("%d\n%d\n", mN, meN);
}