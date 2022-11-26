#include<stdio.h>
#include<string.h>
int i=0,j=0,k=0;

int main(){
    int n1,n2;
    scanf("%d",&n1);
    struct creditos{
        int codigoDoCurso;
        double valorPorCredito;
        char nCurso[100];
    };
    struct creditos tabela[n1];
    for(i=0;i<n1;i++){
        scanf("%d %lf %[^\n]s",&tabela[i].codigoDoCurso,&tabela[i].valorPorCredito, tabela[i].nCurso);
    }
    scanf("%d",&n2);
    struct alunos{
        int codigoDoCurso;
        int quantidadeDeCreditos;
        char nomeDoAluno[500];
    };
    struct alunos alunos[n2];
    for(i=0;i<n2;i++){
        getchar();
        scanf("%[^\n]s",alunos[i].nomeDoAluno);
        scanf("%d %d",&alunos[i].codigoDoCurso,&alunos[i].quantidadeDeCreditos);
    }
    for(i=0;i<n2;i++){
        for(k=0;k<n1;k++){
            if(alunos[i].codigoDoCurso==tabela[k].codigoDoCurso){
                printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf\n",alunos[i].nomeDoAluno,tabela[k].nCurso,alunos[i].quantidadeDeCreditos,tabela[k].valorPorCredito,alunos[i].quantidadeDeCreditos*tabela[k].valorPorCredito);
            }
        }
    }
}