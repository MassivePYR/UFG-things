#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//problema das contas de agua. sendo residencia, comercial e industrial.
int main(){
        unsigned int conta;
        char tipoCons;
        double volume, valor;
        //ler a conta, o volume e o tipoCons
        scanf("%u %lf %c", &conta, &volume, &tipoCons);
        if(tipoCons=='R'){
            //computar o valor para residencial
            valor=5.0+0.05*volume;
        }
        else{
            if(tipoCons=='C'){
                //computar o valor para comercial
                valor=500.0;
                if(volume-80>0){
                valor+=0.25*(volume-80);// equivale a valor=valor+0.25*(volume-80)
                }
            }
            if(tipoCons=='I'){
             //computar o valor para industrial     
             valor=800.0;
                if(volume-100>0){
                valor+=0.04*(volume-100);
                }
            }
        }    
        printf("CONTA = %u\n",conta);
        printf("VALOR DA CONTA = %.2lf\n",valor);
}
        