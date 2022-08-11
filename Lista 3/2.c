#include<stdio.h>
#include<string.h>
int i,j;

int main(){
    char str[5001];
    int entradas,cont=0;
    scanf("%d",&entradas);
    while(entradas--){
        getchar();
        scanf("%[^\n]",str);
        if(strlen(str)==5){
            printf("3\n");
        }
        if(strlen(str)==3){
            if(str[0]=='o'&&str[1]=='n'||str[0]=='o'&&str[2]=='e'||str[1]=='n'&&str[2]=='e'){
                printf("1\n");
            }else if(str[0]=='t'&&str[1]=='w'||str[0]=='t'&&str[2]=='o'||str[1]=='w'&&str[2]=='o'){
                printf("2\n");
            }
        } 
    }
}