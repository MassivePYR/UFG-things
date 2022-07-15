#include<stdio.h>
#include<math.h>

int main(){
    int numVet=0,i=0,j=0,cont=0;
    double v1[3]={0}, v2[3]={0}, v3[3]={0}, moduloBA=0.00;
    scanf("%d", &numVet);
    while (numVet>0){
    if(numVet>=2||numVet<=1000){
        for(i=0;i<3;i++){
            scanf("%lf",&v2[i]);
        }
        for(j=0;j<3;j++){
            moduloBA+=pow(v1[j]-v2[j],2);
        }
        v1[0]=v2[0],v1[1]=v2[1],v1[2]=v2[2];
        if(cont!=0){
            printf("%.2lf\n",sqrt(moduloBA));
        }
        moduloBA=0;
        numVet--;
        i=0,j=0,cont++;
    }
    }
}