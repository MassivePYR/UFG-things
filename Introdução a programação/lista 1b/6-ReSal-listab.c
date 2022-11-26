#include<stdio.h>
#include<math.h>
int main(){
    double salario,salario_final;
    scanf("%lf",&salario);
    if(salario<=300){
        salario_final = salario + salario*0.5;
        printf("SALARIO COM REAJUSTE = %.2f\n",salario_final);}
    if(salario>300){
        salario_final = salario + salario*0.3;
        printf("SALARIO COM REAJUSTE = %.2f\n",salario_final);}

    return 0;
}