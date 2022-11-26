#include<stdio.h>
#include<string.h>

int main(){
    int n,i,modificador;
    char frase[51];
    scanf("%d",&n);
    while(n--){
    getchar();
    scanf("%s", frase);
    scanf("%d", &modificador);
    for(i=0; i<strlen(frase); i++){
        if(frase[i]-modificador<65){
            frase[i] = frase[i]+26-modificador;
        }else{
            frase[i] = frase[i]-modificador;
        }
        }
        puts(frase); 
    }
    
}