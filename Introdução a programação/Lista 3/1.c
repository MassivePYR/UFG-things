#include<stdio.h>
#include<string.h>

int main(){
    int i, k=0, j=1, qnt;
    char str[51], str2[51];
    scanf("%d", &qnt);
    getchar();
    while(qnt--){
    scanf("%s %s", &str, &str2);
    int size;
    if(strlen(str)>strlen(str2)){
        size = strlen(str);
    }else{
        size = strlen(str2);
    }
    for(i=0; i<size ;i++){
        if(strlen(str)>i){
            printf("%c", str[i]);
        }
        if(strlen(str2)>i){
            printf("%c", str2[i]);
        }
    }
    printf("\n");
    }
}

