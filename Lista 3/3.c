#include <stdio.h>
#include <string.h>
 
int i;
int vl(char x){
    if((int)x<=122&&(int)x>=97){
        return 1;
    }
    else if ((int)x<=90&&(int)x>=65){
        return 1;
    }
    else return 0;
}
int vv(char x){
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
        return 1;
    }
    else if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
        return 1;
    }
    else return 0;
}
 
int main (){
    int n;
    int letras, vogais, consoantes;
    char S[10001];
    scanf("%d", &n);
    getchar();
 
    while(n--){
        letras = 0;
        vogais = 0;
        scanf("%[^\n]", S);
        getchar();
        for(i=0; S[i]!='\0'; i++){
            letras += vl(S[i]);
            vogais += vv(S[i]);
        }        
        consoantes = letras-vogais;
        printf("Letras = %d\nVogais = %d\nConsoantes = %d\n", letras, vogais, consoantes);
    }
}