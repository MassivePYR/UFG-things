#include<stdio.h>
int main(){
    int n,x=2,c=0,i=1;
    scanf("%d",&n);
    if(n==0){printf("NAO PRIMO\n");}
    if(n==1){printf("NAO PRIMO\n");}
    if(n<0){printf("Numero invalido!\n");}
    else if(n>1){
        while(x<=n-1){
            if(n%x==0){
                c++;
                x++;
            }else{
                x++;
            }
        }
        if(c==0){printf("PRIMO\n");}
        if(c>0){printf("NAO PRIMO\n");}
    }
}