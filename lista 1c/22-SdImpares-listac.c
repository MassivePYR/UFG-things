#include <stdio.h>

int main(){
    int n=0,x=1,y=1,cont=1;
    scanf("%d", &n);
    while(x<=n && x>0){
        cont=x;
        printf("%d*%d*%d = ", x, x, x);
        while(cont!=0){
            printf("%d", y);
            cont--;
            y+=2;
            if(cont>0)
                printf("+");
        }
        printf("\n");
        x++;
    }
    
}