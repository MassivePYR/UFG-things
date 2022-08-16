#include<stdio.h>
#include<string.h>

int main(){
//
int casos=0,n,cont=0;
scanf("%d",&casos);
while(casos--){
    cont++;
    printf("Caso de teste %d\n",cont);
    scanf("%d",&n);
    struct fracao{
        double numerador;
        double denominador;
    };
    struct fracao fracoes[n];
    int i,j;
    for(i=0;i<n;i++){
        scanf("%lf/%lf",&fracoes[i].numerador,&fracoes[i].denominador);
        }
    int comparador=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(fracoes[i].numerador/fracoes[j].denominador==fracoes[j].numerador/fracoes[i].denominador){
                printf("%lf/%lf equivalente a %lf/%lf\n",fracoes[i].numerador,fracoes[i].denominador,fracoes[j].numerador,fracoes[j].denominador);
                comparador++;
            }
        }
    }
        if(comparador==0){
            printf("Nao ha fracoes equivalentes na sequencia\n");
        }
    }   
}