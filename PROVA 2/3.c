#include<stdio.h>
int NomeI(char nome)
{
    if(nome >='A'&& nome <='M'){return 1;}
    if(nome >'M'&& nome <='Z'){return 2;}
    else{return 0;}
}
int main(){
    char iAluno;
    int num,ano,ini=0,nivel,bloco,andar,sala;
    scanf("%d", &num);
    while(num>0)
    {
    scanf("%d %d %c",&nivel,&ano,&iAluno);
    ini=(NomeI(iAluno));

    if(nivel==1){
        if(ano<7){
            if(ano==1){if(ini==1){sala=1;}if(ini==2){sala=2;}andar=1;}
            if(ano==2){if(ini==1){sala=3;}if(ini==2){sala=4;}andar=1;}
            if(ano==3){if(ini==1){sala=1;}if(ini==2){sala=2;}andar=2;}
            if(ano==4){if(ini==1){sala=3;}if(ini==2){sala=4;}andar=2;}
            if(ano==5){if(ini==1){sala=1;}if(ini==2){sala=2;}andar=3;}
            if(ano==6){if(ini==1){sala=3;}if(ini==2){sala=4;}andar=3;}
            bloco=1;
        }
        if(ano>=7){
            if(ano==7){if(ini==1){sala=1;}if(ini==2){sala=2;}andar=1;}
            if(ano==8){if(ini==1){sala=3;}if(ini==2){sala=4;}andar=1;}
            if(ano==9){if(ini==1){sala=1;}if(ini==2){sala=2;}andar=2;}
            bloco=2;
        }
    }
    if(nivel>=1&&ano>6){
        if(ano==1){if(ini==1){sala=3;}if(ini==2){sala=4;}andar=2;}
        if(ano==2){if(ini==1){sala=1;}if(ini==2){sala=2;}andar=3;}
        if(ano==3){if(ini==1){sala=3;}if(ini==2){sala=4;}andar=3;}
        bloco=2;
    }
    printf("Bem vindo(a) a Escola! Suas aulas serao na sala %d do andar %d do bloco %d\n",sala,andar,bloco);
    num--;
    }
}