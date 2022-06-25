#include<stdio.h>
int main(){
    int matricula=0, Dpds=0;
    double Vsm=0, Vsf=0, IpF=0, IpB=0, IpL=0, IpN=0;
    scanf("%d %lf %d %lf %lf",&matricula, &Vsm, &Dpds, &Vsf, &IpN);

    if(Vsf>(12*Vsm)){
        IpB=(Vsf*0.2);
    }else if(Vsf>(5*Vsm)){
        IpB=(Vsf*0.08);
    }else if(Vsf<(5*Vsm)){
        IpB=0;}
        
    IpN=(IpN/100)*Vsf;
    IpL=IpB-(300*Dpds);
    IpF=(IpN-IpL)*-1;

    printf("MATRICULA = %d\n", matricula);
    printf("IMPOSTO BRUTO = %.2lf\n", IpB);
    printf("IMPOSTO LIQUIDO = %.2lf\n", IpL);
    printf("RESULTADO = %.2lf\n", IpF);

    if(IpF<0){
        printf("IMPOSTO A RECEBER\n");
    }else if(IpF=0){
        printf("IMPOSTO A QUITADO\n");
    }else if(IpF>0){
        printf("IMPOSTO A PAGAR\n");

    }
    return 0;
}