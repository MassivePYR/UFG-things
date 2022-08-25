#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int i,j;
void memset(void *s, int c, size_t n){
    char *p = s;
    while(n--)
        *p++ = c;
}

int main(){
    char matriz[5][5]={"\0"};
    //for(i=0;i<5;i++){
    //    for(j=0;j<5;j++){
    //        matriz[i][j]='0';
    //    }
    //}
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%c",matriz[i][j]);
        }
        printf("\n");
    }
}