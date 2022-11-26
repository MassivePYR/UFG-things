#include<stdio.h>
#include<string.h>
int main(){
    char frase[100];
    while(scanf("%[^\n]", frase) != EOF){

    int i, j;
    for(i=strlen(frase); i>0; i--){
        printf("%c", frase[i-1]);
        }
        getchar();
        printf("\n");
    }
}