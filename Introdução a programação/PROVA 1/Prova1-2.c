#include<stdio.h>

    int main(){
        int v=0, n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0;
        scanf("%d", &v);
        if(0 < v < 1000000){
            n100 = (v/100);
            n50 = v%100/50;
            n20 = v%100%50/20;
            n10 = v%100%50%20/10;
            n5 = v%100%50%20/5;
            n2 = v%100%50%20%5/2;
            n1 = v%100%50%20%5%2/1;
            printf("%d\n",v);
            printf("%d nota(s) de R$ 100,00\n",n100);
            printf("%d nota(s) de R$ 50,00\n",n50);
            printf("%d nota(s) de R$ 20,00\n",n20);
            printf("%d nota(s) de R$ 10,00\n",n10);
            printf("%d nota(s) de R$ 5,00\n",n5);
            printf("%d nota(s) de R$ 2,00\n",n2);
            printf("%d nota(s) de R$ 1,00\n",n1);
            
        }
        else{
           printf("Valor invalido!");
        }
    }