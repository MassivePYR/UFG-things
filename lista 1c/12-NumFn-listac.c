#include<stdio.h>
int main(){
int n,x=1,t1=1,t2=2,aux=0,final=1;
scanf("%d",&n);
if(n<=1){
     printf("Campeonato Invalido!\n");
}else{
    while(x!=n){
        if(t2<=n){
        printf("Final %d: Time%d X Time%d\n",final,t1,t2);
        final++;
        t2++;
        }else{
            t1++;
            t2=t1+1;
            x++;
            }
        }
    }
}