#include<stdio.h>
#include<math.h>
//L=lucro, i=ingresso, Lm=lucro maximo, im=ingresso maximo.
int main(){
    double vc, vi, vf, L=0,i,vm,Lm,im;
    scanf("%lf %lf %lf", &vc , &vi , &vf);
    if(vi>=vf){
        printf("INTERVALO INVALIDO.\n");
    }else{
    Lm=(120*vi)-206;
    while(vi<=vf){
        if(vi<vc){
            i=120+((vc-vi)*50);
        }else if(vi>vc){
            i=120+((vc-vi)*60);
        } else {
            i=120;
        }
        L=(i*vi)-(200+(0.05*i));
        printf("V: %.2lf, N: %.lf, L: %.2lf\n",vi, i, L);
        if(L>Lm){Lm=L,vm=vi,im=i;}
        vi++;
    }
    if(Lm>0){
        printf("Melhor valor final: %.2lf\n",vm);
        printf("Lucro: %.2lf\n",Lm);
        printf("Numero de ingressos: %.lf\n",im);
    } else {
        printf("Melhor valor final: 0.00\n");
        printf("Lucro: 0.00\n");
        printf("Numero de ingressos: 0\n");
    }
}
}