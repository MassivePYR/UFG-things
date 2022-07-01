#include<stdio.h>
//teste 18 - lista 1c
int inverte3(x){
    int c,d,u;
    c=x/100, d=x%100/10, u=x%100%10;
    return(c+d*10+u*100);
}
int main (){
    
    unsigned int t,nf,nf2,nu,nu2,out;
    scanf("%u", &t);
    out=inverte3(nu);
    printf("depuracao%d\n",out);
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

