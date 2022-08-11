#include<stdio.h>
float media(float a,float b,float c){
    return (a+b+c)/3;
}

int main(){
    struct aluno{
        char nome[50];
        float nota1;
        float nota2;
        float nota3;
        float media;
    };
    struct aluno alunos[10];
    int i,j;
    for(i=0;i<10;i++){
        scanf("%s",alunos[i].nome);
        scanf("%f",&alunos[i].nota1);
        scanf("%f",&alunos[i].nota2);
        scanf("%f",&alunos[i].nota3);
        alunos[i].media=media(alunos[i].nota1,alunos[i].nota2,alunos[i].nota3);
    }
    //organizar por media
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(alunos[i].media<alunos[j].media){
                struct aluno aux;
                aux=alunos[i];
                alunos[i]=alunos[j];
                alunos[j]=aux;
            }
        }
    }
    for(i=0;i<10;i++){
        printf("%s\n",alunos[i].nome);
        printf("%.2f\n",alunos[i].media);
    }
    return 0;
}