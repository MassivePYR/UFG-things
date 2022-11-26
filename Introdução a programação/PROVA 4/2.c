#include<stdio.h>  
#include<stdlib.h>
int i,j,k,h,aux2=0;

int main(){
    char l;
    int n,cont=1;
    scanf("%c",&l);
    scanf("%d",&n);
    double mat[n][n];
    int aux=n/2;
    double total=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%lf",&mat[i][j]);
        }
    }
    if(l=='M'){
        for(i=n-1;i>aux;i--){
            for(j=cont;j<n-cont;j++){
                total+=mat[j][i];
                aux2++;
                }
            cont++;
        }
        if(total>0){
            total/=aux2;
        }
        printf("%.2lf\n",total);
    }
    
    if(l=='S'){
        for(i=n-1;i>aux;i--){
            for(j=cont;j<n-cont;j++){
                total+=mat[j][i]; //era aqui que estava invertido, estava mat[i][j]
            }
            cont++;
        }
    printf("%.2lf\n",total);
    }
    return 0;
}

