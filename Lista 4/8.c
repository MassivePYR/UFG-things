#include<stdio.h>
#include<stdlib.h>
int i,j;

int main(){
    int m, n, o, p;
    do{scanf("%d", &m);//altura
    }while(m<1 || m>100);
    do{scanf("%d", &n);//largura
    }while(n<1 || n>100);
    scanf("%d", &o);//Grossura da Borda
    scanf("%d", &p);//o quê da borda
    printf("P2\n");
    printf("%d %d\n", n, m);
    printf("255\n");

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i<o || i>m-o || j<o || j>n-o){
                printf("%d ", p);
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}