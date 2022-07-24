#include<stdio.h>
#include<string.h>
int vogais(char *str){
    int i,j,k,cont=0;
    for(i=0;i<strlen(str);i++){
        if(str[i]>='a' && str[i]<='z'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            cont++;
        }
        if(str[i]>='A' && str[i]<='Z'){
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            cont++;
        }
        }
    }
    }
    return cont;
}
int consoantes(char *str){
    int i,j,k,cont=0;
    for(i=0;i<strlen(str);i++){
        if(str[i]>='a' && str[i]<='z'){
        if(str[i]!='a'||str[i]!='e'||str[i]!='i'||str[i]!='o'||str[i]!='u'){
            cont++;
        }
        if(str[i]>='A' && str[i]<='Z'){
        if(str[i]!='A'||str[i]!='E'||str[i]!='I'||str[i]!='O'||str[i]!='U'){
            cont++;
        }
        }
    }
    }
    return cont;
}

int main(){
    int c,v,letras,n;
    char str[10000];
    scanf("%d", &n);
    while(n>0){
        scanf("%[^/0]", str);
        strlwr(str);
        c=consoantes(str);
        v=vogais(str);
        letras=strlen(str);
        printf("Letras = %d\nVogais = %d\nConsoantes = %d\n", letras, v, c);
        n--;
        c=0,v=0,letras=0;
    }

}