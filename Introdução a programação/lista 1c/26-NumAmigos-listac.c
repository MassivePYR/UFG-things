#include<stdio.h>
int Smdivi(int numero)
{
    int i, soma=0;
    for(i=1; i<numero; i++){
        if(numero%i==0){soma+=i;}
    }
    return soma;
}
int main(){
    int e,i,soma,aux;
    scanf("%d", &e);
    if(e<=9)
    {
        for(i=1; e!=0 ; i++)
        {
            soma=Smdivi(i);
            if(Smdivi(soma) == i){
                if (soma != i && i != aux){
                    printf("(%d,%d)\n", i, soma);
                    aux=soma;
                    e--;
                }
                i++;
            }
        }

    }
}