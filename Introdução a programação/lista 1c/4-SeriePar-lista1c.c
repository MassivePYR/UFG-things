#include<stdio.h>

    int main(){
        int x1,x2;
        scanf("%d %d",&x1,&x2);
        if(x1%2==0){
            while(x2 != 0){
                printf("%d ",x1);
                x2--;
                x1+=2;
            }
        }else{
            printf("O PRIMEIRO NUMERO NAO E PAR\n");
    }
    }