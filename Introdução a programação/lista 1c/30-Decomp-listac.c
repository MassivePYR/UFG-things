#include <stdio.h>
int fatoracao(int n){
    int f=2, i=0; i=n;
    if(i<1){printf("Fatoracao nao e possivel para o numero %d!\n", n);}
    else{
        printf("%d = ", i);
        //if(f>i){printf("%d",i);}
        while(i>1){
            if(i%f==0){
                i=i/f;
                printf("%d", f);
                if(i>=f){printf(" x ");}
                if(i<=f){printf("\n");}
            }else{
                f++;
}   }   }   }

int main(){
    int n;
    while(scanf("%d",&n) != EOF){
    fatoracao(n);}
}
