#include <stdio.h>

int main(){
    int k, n;
    int resto, i = 0, aux = 0;
    int var[1000];

    while (scanf("%d", &n) != EOF){
        if (n==0||n==1){
            printf("%d\n",n);
        }else{
            while (n != 0){
                resto = n%2;
                var[i] = resto;
                n/=2;
                aux++;
                i++;
            }
            k = aux - 1;
            int arr2[k];
            for (i=0; i<aux; i++){
                arr2[i] = var[k];
                k--;
            }
            for (i=0; i<aux; i++){
                printf("%d", arr2[i]);
            }
            printf("\n");
            for (i=0; i<aux; i++){
                var[i] = 0;
            }
            aux=0;
            i=0;
        }
    }
}