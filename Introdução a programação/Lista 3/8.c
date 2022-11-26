#include<stdio.h>
#include<string.h>
int i=0;

int main(){
    int cases,cont=1;
    char str[500];
    scanf("%d",&cases);
    while (cases--){
            getchar();
            scanf("%[^\n]",&str);
            for(i=2;i<strlen(str);i++){
                if(str[0]==str[i]){
                    printf("Caractere %c encontrado no indice %d da string.\n",str[0], i-2);
                    cont--;
                    break;
                }
            }
            if(cont){
                printf("Caractere %c nao encontrado.\n",str[0]);
        }
        cont=1;
    }
}
