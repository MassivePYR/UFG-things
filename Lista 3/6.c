#include<stdio.h>
#include<string.h>
int i=0, j=0;
//palindromo
int main(){
    int crit=0;
    char str[201];
    while(scanf("%s",str)!=EOF){
        int lenght=strlen(str);
        getchar();
        for(i=0;i<lenght;i++){
            if(str[i]!=str[lenght-i-1]){
                crit++;
            }
        }
        if(crit==0){
            printf("sim\n");
        }else{
            printf("nao\n");
            crit=0;
        }
    }
}