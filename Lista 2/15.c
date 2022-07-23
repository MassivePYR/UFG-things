#include<stdio.h>
#include<math.h>

int main(){
int n,f,i,j,dis,cont=0,mdis=10000;
scanf("%d",&n);
while(n!=0){
    cont=0;
    mdis=10000;
    scanf("%d",&f);
    int vet[f];
        for(i=0;i<f;i++){
            scanf("%d", &vet[i]);
        }
    for(i=0;i<f;i++){
        for(j=i+1;j<f;j++){
            dis=abs(vet[i]-vet[j]);
            if(dis<mdis||mdis==0){
                mdis=dis;
            }
        } 
        cont+=i;
    }
    printf("%d %d\n", dis, cont);
    n--;
    }
}
/*(n-1*n/2);
#include<string.h>
strcpy*/