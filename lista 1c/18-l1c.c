#include<stdio.h>
#include<math.h>
//teste 18 - lista 1c
int main (){
    int t,nf,nf2,nu,nu2;
    t=0;
    scanf("%u", &t);
    while(t--) {
        scanf("%d" "%d", &nu ,&nu2);
        nf=((nu%10)*100)+(((nu/10)%10)*10)+(nu/100);
        nf2=((nu%10)*100)+(((nu/10)%10)*10)+(nu/100);
    if(nf>nf2){
        printf("%u\n", nf);
    }else{
        printf("%u\n", nf2);
    }  
}
}

