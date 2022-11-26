#include<stdio.h>
#include<math.h>
int main(){
    int i,n=0,aux,j,vet[100000]={0};
    double mediana=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
        for(j=0;j<n;j++){
            if(vet[i]<vet[j]){
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
        }
        j=0;
    }
    if(n%2==0){
        mediana = (vet[(n/2)-1]+vet[(n/2)]);
        printf("%.2lf\n",mediana/2);
    }else if(n%2!=0){
        aux = floor(n/2);
        mediana = vet[aux];
        printf("%.2lf\n",mediana);
    }
}