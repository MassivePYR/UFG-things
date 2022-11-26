#include<stdio.h>
#include<math.h>
int main(){
    int qntsN=0,entrdN=0,aux,v1,v2,mseq,seq;
    scanf("%d",&qntsN);
    scanf("%d",&entrdN);
    aux=entrdN;
    mseq=1;
    seq=1;
    while(qntsN--){
        scanf("%d",&v1);
        if(v1>entrdN){
            seq++;
            if(mseq<seq)
                mseq=seq;
        }else
            seq=0;
            entrdN=v1;
        }
    printf("O comprimento do seguimento crescente maximo e: %d\n", mseq);
    return 0;
}