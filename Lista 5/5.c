#include<stdio.h>
#include<string.h>
int i;

int main(){
    int qntsCursos;
    scanf("%d", &qntsCursos);
    struct {int cursoCodigo; double valorpCredito; char nomeDCurso[100];}curso[qntsCursos];
    for(i=0;i<qntsCursos;i++){
        scanf("%d",&curso[i].cursoCodigo);
        getchar();
        scanf("%lf",&curso[i].valorpCredito);
        getchar();
        scanf("%s",&curso[i].nomeDCurso);
        getchar();
    }
    int qntsAlunos;
    scanf("%d", &qntsAlunos);
    double mensalidade;
    struct {char nomeDAluno[500]; int cursoCodigo; int qntCredito;}aluno[qntsAlunos];
    for(i=0;i<qntsAlunos;i++){
        scanf("%[^\n]s", aluno[i].nomeDAluno);
        scanf("%d",&aluno[i].cursoCodigo);
        scanf("%d",&aluno[i].qntCredito);
        mensalidade = aluno[i].qntCredito * curso[i].valorpCredito;
        printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf\n", aluno[i].nomeDAluno, curso[i].nomeDCurso, aluno[i].qntCredito, curso[i].valorpCredito, mensalidade);
    }
}