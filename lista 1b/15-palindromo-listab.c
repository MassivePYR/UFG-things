#include<stdio.h>

int main(){
    int n,aux,aux1,dm,um,c,ad,u;
    scanf("%d",&n);
    if(n<=99999){
        dm=n/10000;
        um=n%10000/1000;
        c=n%10000%1000/100;
        ad=n%10000%1000%100/10;
        u=n%10000%1000%100%10;
        if(dm>0){
            if(dm==u && um==ad){
                printf("PALINDROMO",n);
            }else{
                printf("NAO PALINDROMO",n);
            }
        }
        if(dm==0 && um>0){
            if(um==u && c==ad){
                printf("PALINDROMO",n);
            }else{
                printf("NAO PALINDROMO",n);
            }
        }
        if(dm==0 && um==0 && c>0){
            if(c==u){
                printf("PALINDROMO",n);
            }else{
                printf("NAO PALINDROMO",n);
            }
        }
        if(dm==0 && um==0 && c==0 && ad>0){
            if(ad==u){
                printf("PALINDROMO",n);
            }else{
                printf("NAO PALINDROMO",n);
            }
        }
        if(dm==0 && um==0 && c==0 && ad==0 && u>0){
            printf("PALINDROMO",n);
        }else if(dm==0 && um==0 && c==0 && ad==0 && u==0){
            printf("PALINDROMO",n);
        }
    }else{printf("NUMERO INVALIDO\n");}
    return 0;
}