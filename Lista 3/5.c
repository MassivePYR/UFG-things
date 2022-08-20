#include<stdio.h>
#include<string.h>
int i=0, j=0;

int main(){
    int m=-7,n=-7,sInt=0;
    while(scanf("%d %d", &m ,&n)!= 0){
        if(m==0&&n==0){break;}
    getchar();
    sInt=m+n;
    char s[1000000];
    sprintf(s, "%d", sInt);
    for(i=0;i<strlen(s);i++){
        if(s[i]!='0'){
            printf("%c", s[i]);
        }
    }
    printf("\n");
    }
}