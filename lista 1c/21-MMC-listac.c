#include <stdio.h>

int main(){
    int n=0, m=0, p=0, cont=2, mmc=1;
    scanf("%d %d %d", &n, &m, &p);

    while (n>1 || m>1 || p>1){
        if(n%cont!=0 && m%cont!=0 && p%cont!=0){
            cont++;
            continue;
        }
        mmc = mmc*cont;
        printf("%d %d %d :%d\n",n,m,p,cont);
        if(n>1 && n%cont==0){n= n/cont;}
        if(m>1 && m%cont==0){m= m/cont;}
        if(p>1 && p%cont==0){p= p/cont;}
    }
    printf("MMC: %d\n", mmc);
}