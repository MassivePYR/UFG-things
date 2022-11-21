#include <stdio.h>
void maiorElemento(int l,int c,double matriz[l][c]){
    int i=0,j=0,linha=0,coluna=0;
    double maior=0;
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            if(matriz[i][j]>maior){
                maior=matriz[i][j];
                linha=i;
                coluna=j;
            }
        }
    }
    printf("%.1lf ",maior);
    printf("%d %d\n",linha,coluna);
return;
}

int main(){
    int i=0,j=0,linha=0,coluna=0,m,n;
// parte para leitura da matriz
    scanf("%d %d",&n,&m);
    double matriz[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%lf",&matriz[i][j]);
        }
    }
    maiorElemento(n,m,matriz);
}
