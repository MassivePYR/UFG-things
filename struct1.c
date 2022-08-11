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
    for(i=0;i<100;i++){
        if(alunos[i].media>=7){
            printf("%s\n",alunos[i].nome);
        }
    }
    return 0;
}