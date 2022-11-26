#include <stdio.h>
#include <string.h>
int i;

int main(){
    int n,j=0,aux,aux1;
    scanf("%d", &n);
    char str[1000];

    while (j < n){
        getchar();
        scanf("%[^\n]s", str);
        aux=strlen(str);
        if(aux%2==0){
            aux1=aux/2;
            }else{
                aux1=aux/2+1;
        }
        for(i=0;i<aux;i++){
            if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122)){
                str[i] += 3;
            }
            if (i<aux1){
                str[i]-=1;
            }
        }
        for (i=aux-1;i>=0;i--){
            printf("%c",str[i]);
        }
        printf("\n");
        j++;
    }
}