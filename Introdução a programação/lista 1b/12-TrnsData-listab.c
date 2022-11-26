#include<stdio.h>
int main(){
    int cmplx=0, dia=0, mes, ano=0;
    scanf("%d", &cmplx);
    if(cmplx>01010001 && cmplx<31129999){
        dia = cmplx / 1000000;
        mes = (cmplx - (dia*1000000))/10000;
        ano = (cmplx - (dia*1000000)) - mes*10000;
    }
    switch(mes){
        case 1:
            if(dia>0 && dia<=31){
                printf("%d de janeiro de %d", dia, ano);
            }else {printf("Data invalida!");}
            break;
        case 2:
            if(dia>0 && dia<=28){
                printf("%d de fevereiro de %d", dia, ano);
            }else {printf("Data invalida!");}
            break;
        case 3:
            if(dia>0 && dia<=31){
                printf("%d de março de %d", dia, ano);
            }else {printf("Data invalida!");}
            break;
        case 4:
            if(dia>0 && dia<=30){
                printf("%d de abril de %d", dia, ano);
            }else {printf("Data invalida!");}
            break;
        case 5:
            if(dia>0 && dia<=31){
                printf("%d de maio de %d", dia, ano);
            }else {printf("Data invalida!");}
            break;
        case 6:
            if(dia>0 && dia<=30){
                printf("%d de junho de %d", dia, ano);
            }else {printf("Data invalida!");}
            break;
        case 7:
            if(dia>0 && dia<=31){
                printf("%d de julho de %d", dia, ano);
            }else {printf("Data invalida!");}
            break;
        case 8:
            if(dia>0 && dia<=31){
                printf("%d de agosto de %d", dia, ano);
            }else {printf("Data invalida!");}
            break;
        case 9:
            if(dia>0 && dia<=30){
                printf("%d de setembro de %d", dia, ano);
            }else {printf("Data invalida!");}
            break;
        case 10:
            if(dia>0 && dia<=31){
                printf("%d de outubro de %d", dia, ano);
            }else {printf("Data invalida!");}
            break;
        case 11:
            if(dia>0 && dia<=30){
                printf("%d de novembro de %d", dia, ano);
            }else {printf("Data invalida!");}
            break;
        case 12:
            if(dia>0 && dia<=31){
                printf("%d de dezembro de %d", dia, ano);
            }else {printf("Data invalida!");}
            break;
        default:
            printf("Data invalida!");
            break;
    }
    return 0;
}
