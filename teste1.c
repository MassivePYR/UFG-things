#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int n,i;

int main(){
    scanf("%d",&n);
    char str[(n+1)];
    for(i=0;i<n;i++){
        scanf("%s",str);
    }
    scanf("%s",str);
    sprintf(str,"%s",str);
}