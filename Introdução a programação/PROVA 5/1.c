//concatenação de strings
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i;

void juncao(char *str1, char *str2, int pos){
    int size=strlen(str1)+strlen(str2);
    char *str3=(char*)malloc(size*sizeof(char));
    for(i=0;i<strlen(str3);i++){
        if(pos==0){
            if(i<strlen(str2)){
             str3[i]=str2[i];
            }
            else if(i>=strlen(str2)){
                str3[i]=str1[i];
            }
        }
        if(pos==1){
            if(i<strlen(str1)){
                str3[i]=str1[i];
            }
            else if(i>strlen(str2)){
                str3[i]=str2[i];
            }
        }
    }
}

int main(){
    int casos;
    scanf("%d",&casos);
    while(casos--){
        int pos;
        char str1[300]={0},str2[300]={0},str3[600]={0};
        fgets(str1,300,stdin);
        getchar();
        fgets(str2,300,stdin);
        getchar();
        scanf("%d",&pos);
        getchar();
        juncao(str1,str2,pos);
        fputs(str3,stdout);
    }
}