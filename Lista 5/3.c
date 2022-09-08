#include<stdio.h>
#include<string.h>
int i;

int main(){
    struct{ char pais[16]; char pronuncia[24];}fnatal[25]={
        {"brasil","Feliz Natal!"},
        {"alemanha","Frohliche Weihnachten!"},
        {"austria","Frohe Weihnacht!"},
        {"coreia","Chuk Sung Tan!"},
        {"espanha","Feliz Navidad!"},
        {"grecia","Kala Christougena!"},
        {"estados-unidos","Merry Christmas!"},
        {"inglaterra","Merry Christmas!"},
        {"australia","Merry Christmas!"},
        {"portugal","Feliz Natal!"},
        {"suecia","God Jul!"},
        {"turquia","Mutlu Noeller"},
        {"argentina","Feliz Navidad!"},
        {"chile","Feliz Navidad!"},
        {"mexico","Feliz Navidad!"},
        {"antardida","Merry Christmas!"},
        {"canada","Merry Christmas!"},
        {"irlanda","Nollaig Shona Dhuit!"},
        {"belgica","Zalig Kerstfeest!"},
        {"italia","Buon Natale!"},
        {"libia","Buon Natale!"},
        {"siria","Milad Mubarak!"},
        {"marrocos","Milad Mubarak!"},
        {"japao","Merii Kurisumasu!"}
    };
    char pEntrada[16];
    while(scanf("%s", &pEntrada)!=EOF){
        int cont=0;
        for(i=0;i<25;i++){
            if(strcmp(pEntrada,fnatal[i].pais)==0){
                printf("%s\n",fnatal[i].pronuncia);
                cont++;
            }
        }
        if(cont==0){
            printf("-- NOT FOUND --\n");
        }
        cont=0;
    }
}