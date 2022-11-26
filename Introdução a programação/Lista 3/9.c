#include <stdio.h>
#include <string.h>

int main(){
    int n,n1,n2,i,k,j=1,x;
    scanf("%d",&n);
    char string[12221];

    while (j <= n){
        scanf("%d %d",&n1,&n2);
        x=n1;
        while (x<=n2){
            printf("%d",x);
            x++;
        }
        for (k=n2;k>=n1;k--){
            sprintf(string, "%d",k);
            for (i=strlen(string)-1;i>=0;i--){
            printf("%c", string[i]);
            }
        }
        printf("\n");
        j++;
    }
}