#include<stdio.h>
#include<math.h>
    int main(){
        double massa=0,aceleracao=0,tempo=0,v0=0,vf=0,distancia=0,trabalho,aux,aux1,aux2;
        scanf("%lf %lf %lf",&massa,&aceleracao,&tempo);
        massa=massa*1000;
    vf=v0+(aceleracao*tempo);
    distancia=(aceleracao*(pow(tempo,2)))/2;
    trabalho=((massa*(pow(vf,2)))/2);
    printf("VELOCIDADE = %.2lf\n", vf*3.6);
    printf("ESPACO PERCORRIDO = %.2lf\n", distancia);
    printf("TRABALHO REALIZADO = %.2lf\n", trabalho);


}