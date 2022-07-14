#include<stdio.h>
#include<math.h>

int main(){
    int moduloBA=0, numVet;
    double v1[3], v2[3], v3[3];
    scanf("%d", &numVet);
    if(numVet>=2||numVet<=1000){
        for(int i=0;i<numVet;i++){
            scanf("%lf",&v1[i]);
        }
        for(int i=0;i<numVet;i++){
            scanf("%lf",&v2[i]);
        }
        for(int i=0;i<numVet;i++){
            moduloBA+=pow(v1[i]-v2[i],2);
        }
        printf("%.2lf\n",sqrt(moduloBA));
    }

}