#include<stdio.h>
#include<math.h>

int main(){
    double x, y, z, w, auxA, auxB;
    scanf("%lf %lf %lf %lf", &x, &y, &z, &w);
    if(x>y){
        auxA = x;
        x = y;
        y = auxA;
    }

    if(x>z){
        auxA = x;
        x = z;
        z = auxA;
    }

    if(x>w){
        auxA = x;
        x = w;
        w = auxA;
    }

    if(y>z){
        auxB = y;
        y = z;
        z = auxB;
    }

    if(y>w){
        auxB = y;
        y = w;
        w = auxB;
    }

    if(z>w){
        auxB = z;
        z = w;
        w = auxB;
    }
    printf("%.2lf, %.2lf, %.2lf, %.2lf\n", x, y, z, w);
    

    





}