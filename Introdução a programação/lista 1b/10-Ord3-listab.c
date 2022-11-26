#include <stdio.h>
#include <math.h>
int main(){
    double x,y,z,aux,track;
    scanf("%lf %lf %lf",&x, &y, &z);
        if(x>y){
            aux=x;
            x=y;
            y=aux;
        }
        if(y>z){
            aux=y;
            y=z;
            z=aux;
        }
        if(x>y){
            aux=x;
            x=y;
            y=aux;
        }
        printf("%.2lf, %.2lf, %.2lf\n",x,y,z);
}