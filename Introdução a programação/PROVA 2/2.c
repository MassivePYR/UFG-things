#include<stdio.h>
int main(){
    int dia=0,codigo=0,vendas=0,cont=1;
    double valor=0,seg=0,ter=0,qua=0,qui=0,sex=0,f1=0,f2=0,f3=0,s1=0,s2=0,s3=0,vt=0;
    while(scanf("%d",&dia) != EOF){
        scanf("%d",&vendas);
        while(vendas!=0){
            scanf("%lf %d",&valor,&codigo);
            if(dia==1){
                if(codigo==1){f1+=valor;}
                if(codigo==2){f2+=valor;}
                if(codigo==3){f3+=valor;}
                seg+=valor;
            }
            if(dia==2){
                if(codigo==1){f1+=valor;}
                if(codigo==2){f2+=valor;}
                if(codigo==3){f3+=valor;}
                ter+=valor;
            }
            if(dia==3){
                if(codigo==1){f1+=valor;}
                if(codigo==2){f2+=valor;}
                if(codigo==3){f3+=valor;}
                qua+=valor;
            }
            if(dia==4){
                if(codigo==1){f1+=valor;}
                if(codigo==2){f2+=valor;}
                if(codigo==3){f3+=valor;}
                qui+=valor;
            }
            if(dia==5){
                if(codigo==1){f1+=valor;}
                if(codigo==2){f2+=valor;}
                if(codigo==3){f3+=valor;}
                sex+=valor;
            }
            vt+=valor;
            vendas--;
        }
    }
    printf("Total de vendas da segunda-feira: %.2lf\n",seg);
    printf("Total de vendas da terca-feira: %.2lf\n",ter);
    printf("Total de vendas da quarta-feira: %.2lf\n",qua);
    printf("Total de vendas da quinta-feira: %.2lf\n",qui);
    printf("Total de vendas da sexta-feira: %.2lf\n",sex);
    printf("Total de vendas da semana: %.2lf\n",vt);
    printf("Total de vendas semanais do funcionario 1: %.2lf\n",f1);
    printf("Total de vendas semanais do funcionario 2: %.2lf\n",f2);
    printf("Total de vendas semanais do funcionario 3: %.2lf\n",f3);
}