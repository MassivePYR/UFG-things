#include <stdio.h>
#include <string.h>
#include <ctype.h>
//A entrada contém diversos casos de testes. Cada caso é expresso como um texto em uma única linha,
//contendo de 1 a 100 palavras separadas por um único espaço, cada palavra tendo de 1 a 50 letras minúsculas
//ou maiúsculas (’A’-’Z’,’a’-’z’). A entrada termina em EOF
//Para cada caso de teste imprima o número de aliterações existentes no texto informado, conforme exemplos abaixo
int main(){
    char str[51];
    int i, j, qnts, qnts2;
    scanf("%d", &qnts);
    getchar();
    while(qnts--){
        scanf("%s", str);
        qnts2=0;
        for(i=0; i<strlen(str); i++){
            if(isalpha(str[i])){
                qnts2++;
            }
        }
        printf("%d\n", qnts2);
    }
    return 0;


}