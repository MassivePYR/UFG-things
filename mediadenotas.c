#include<stdio.h>
#include<math.h>

int main(){
    float x, y ,z, mf;
    scanf("%f %f %f", &x, &y, &z);
    mf = (x+y+z)/3;
    printf("MEDIA = %.2f\n", mf);
    if(mf>=6){
        printf("APROVADO\n");
    }
    if(mf<6){
        printf("REPROVADO\n");
    }
return  0;
}