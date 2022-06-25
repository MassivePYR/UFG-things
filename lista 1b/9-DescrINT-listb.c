#include<stdio.h>
#include<math.h>
int main(){
    int n=0,m=0,c=0,d=0,u=0;
    scanf("%d",&n);
    if(n>0 && n<100000){
        if(n>999 && n<10000){
            m=n/1000;
            c=n%1000/100;
            d=n%1000%100/10;
            u=n%1000%100%10;
            if(m==1){
                printf("(quarta ordem) %d = %d unidade de milhar ",n,m);
            }
            else{
            printf("(quarta ordem) %d = %d unidades de milhar ",n,m);
            }
            if(c==1){
                printf("+ %d centena ",c);
            }
            else{
                printf("+ %d centenas ",c);
            }
            if(d==1){
                printf("+ %d dezena ",d);
            }
            else{
                printf("+ %d dezenas ",d);
            }
            if(u==1){
                printf("+ %d unidade",u);
            }
            else{
                printf("+ %d unidades",u);
            }
        }
        if(n>99 && n<1000){
            c=n/100;
            d=n%100/10;
            u=n%100%10;
            if(c==1){
                printf("(terceira ordem) %d = %d centena ",n,c);
            }
            else{
                printf("(terceira ordem) %d = %d centenas ",n,c);
            }
            if(d==1){
                printf("+ %d dezena ",d);
            }
            else{
                printf("+ %d dezenas ",d);
            }
            if(u==1){
                printf("+ %d unidade",u);
            }
            else{
                printf("+ %d unidades",u);
            }
        }
        if(n>9 && n<100){
            d=n/10;
            u=n%10;
            if(d==1){
                printf("(segunda ordem) %d = %d dezena ",n,d);
            }
            else{
                printf("(segunda ordem) %d = %d dezenas ",n,d);
            }
            if(u==1){
                printf("+ %d unidade",u);
            }
            else{
                printf("+ %d unidades",u);
            }
            
        }
        if(n>0 && n<10) {
            if (n == 1) {
                printf("(primeira ordem) 1 = 1 unidade");
            } else {
                printf("(primeira ordem) %d = %d unidades", n, n);
            }
        }

    }

    return 0;
}