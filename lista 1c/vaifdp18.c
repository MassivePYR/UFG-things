#include<stdio.h>
//teste 18 - lista 1c
int main (){
    unsigned int t,nf,nf2,nu,nu2;
    scanf("%u", &t);
    while(t--) {
        scanf("%d %d", &nu ,&nu2);
        nf=((nu%10)*100)+(((nu/10)%10)*10)+(nu/100);
        nf2=((nu2%10)*100)+(((nu2/10)%10)*10)+(nu2/100);
    if(nf>nf2){
        printf("%u\n", nf);
    }else 
        printf("%u\n", nf2);
     
    }
}

