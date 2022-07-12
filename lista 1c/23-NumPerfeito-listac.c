#include<stdio.h>
int main(){
int n,i,soma=0,x=1,y,somaX=0;
scanf("%d",&n);

if(n>1){
    printf("%d = ",n); y=n;
    
    for(i=1;i<n;i++){
        do{
            if(y%x==0&&x!=n){
                if(x>1){
                printf(" + ");
                }
                printf("%d",x);
                somaX+=x;
            }
            if(x==n){
                printf(" = ");
            }
            x++; 
        }while(x<=n);
    }
    if(somaX==n){
        printf("%d (NUMERO PERFEITO)\n",n);
    }
    else{
        printf("%d (NUMERO NAO E PERFEITO)\n",somaX);
    }
    return 0;
}
}