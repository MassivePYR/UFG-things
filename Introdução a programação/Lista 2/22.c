#include<string.h>
#include<stdio.h>

int main(){
    char str[100]={' '};
    int num,d,j,cont=0;
    char i;
    while(scanf("%d %d", &num, &d)!=0){
        char vet[num];
        if(d>0&&d<=100000){
            scanf("%s", str);
            for(i=0; i<num; i++){
                vet[i]=str[i];
            }
        }
        for(i='0'; i<='9'; i++){
            for(j=0; cont<=num; j++){
                if(vet[j] == 'i')
                {
                    vet[j] = ' ';
                    cont++;
                }
            }
        }
        for(i=0; i<cont; i++){
            if(vet[i] != ' ')
            {
                printf("%c", vet[i]);
            }
        }
    }

}