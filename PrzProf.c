#include<stdio.h>
#include<math.h>
    unsigned int cc, dr, rt, tipo=7;
int main(){
    scanf("%i %i %i", &cc, &dr, &rt);
    if(cc<7){
        tipo=8;
        if(dr>50){
            tipo++;
            if(rt>80000){
                tipo++;
            }
    printf("ACO DE GRAU = %i\n", tipo);
    return 0;
    } 
    }