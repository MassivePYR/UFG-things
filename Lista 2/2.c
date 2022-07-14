#include<stdio.h>

int main(){
    int amostra[1000], n, k, cont=0,i;
    while(n<1||n>1000){
        scanf("%d",&n);
    }
    for(i=0;i<n;i++){
        scanf("%d",&amostra[i]);
    }
    i=0;
    scanf("%d",&k);
    for(i=0;i<n;i++){
        if(k<=amostra[i]){
            cont++;
        }
    }
    printf("%d\n",cont);
    return 0;
}