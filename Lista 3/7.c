#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int i;

int main(){
    int reed,cases,log=0;
    char str[500],prt[500];

    scanf("%d", &cases);
    while(cases--){
        for (i = 0; i < 500; i++){
            str[i] = '\0';
            prt[i] = '\0';
        }
        getchar();
        scanf("%d",&reed);
        getchar();
        scanf("%[^\n]s", str);
        for(i=0;i<reed;i++){
            prt[log]=str[i];
            log++;
        }
        printf("%s\n", prt);
        log=0;
    }
}