#include<stdio.h>

int main(){
    char iAluno=0;
    int num,ano,nivel;
    scanf("%d", &num);
    while(num>0){
        scanf("%d %d %c",&nivel,&ano,&iAluno);
        iAluno=("%d",iAluno);
        printf("Bem vindo(a) a Escola! ");
        if (nivel==1&&ano<=6){
            if(ano==1){
                if (iAluno>='A'&&iAluno<='M'){
                    printf(" e suas aulas serao na sala 1");
                }else{
                    printf(" e suas aulas serao na sala 2");
                }
            }if(ano==2){
                if (iAluno>='A'&&iAluno<='M'){
                    printf(" e suas aulas serao na sala 3");
                }else{
                    printf(" e suas aulas serao na sala 4");
                }
             }
                printf(" do andar 1");
            }
            if(ano<=4&&ano>2){
                if(ano==3){
                if (iAluno>='A'&&iAluno<='M'){
                    printf(" e suas aulas serao na sala 1");
                }else{
                    printf(" e suas aulas serao na sala 2");
                }
            }if(ano==4){
                if (iAluno>='A'&&iAluno<='M'){
                    printf(" e suas aulas serao na sala 3");
                }else{
                    printf(" e suas aulas serao na sala 4");
                }
                printf(" do andar 2");
            }
            }
            if(ano>4){
                if(ano==5){
                if (iAluno>='A'&&iAluno<='M'){
                    printf(" e suas aulas serao na sala 1");
                }else{
                    printf(" e suas aulas serao na sala 2");
                }
            }if(ano==6){
                if (iAluno>='A'&&iAluno<='M'){
                    printf(" e suas aulas serao na sala 3");
                }else{
                    printf(" e suas aulas serao na sala 4");
                }
                printf(" do andar 3");
            }
            printf(" do bloco 1.");
        }
        if (nivel>=1&&ano>6){
            
            if(nivel==1&&ano<6||nivel==1&&ano<=8){
                if(ano==7){
                if (iAluno>='A'&&iAluno<='M'){
                    printf(" e suas aulas serao na sala 1");
                }else{
                    printf(" e suas aulas serao na sala 2");
                }
            }if(ano==8){
                if (iAluno>='A'&&iAluno<='M'){
                    printf(" e suas aulas serao na sala 3");
                }else{
                    printf(" e suas aulas serao na sala 4");
                }
                printf(" do andar 1");
            }
            if(nivel==1&&ano>8||nivel==2&&ano<=1){
                if(ano==9){
                if (iAluno>='A'&&iAluno<='M'){
                    printf(" e suas aulas serao na sala 1");
                }else{
                    printf(" e suas aulas serao na sala 2");
                }
            }if(nivel==2&&ano==1){
                if (iAluno>='A'&&iAluno<='M'){
                    printf(" e suas aulas serao na sala 3");
                }else{
                    printf(" e suas aulas serao na sala 4");
                }
                printf(" do andar 2");
            }
            if(nivel==2&&ano>=1){
                if(ano==2){
                if (iAluno>='A'&&iAluno<='M'){
                    printf(" e suas aulas serao na sala 1");
                }else{
                    printf(" e suas aulas serao na sala 2");
                }
            }if(ano==3){
                if (iAluno>='A'&&iAluno<='M'){
                    printf(" e suas aulas serao na sala 3");
                }else{
                    printf(" e suas aulas serao na sala 4");
                }
                printf(" do andar 3");
            }
            printf(" do bloco 2.\n");
        }

    }
            }
        }
    }
}
