    #include<stdio.h>
    #include<string.h>

    int i=0,j=0;
    int main(){
        int n=0,codigoDoCurso,quantidadeDeAlunos;
        double valorpCredito,mensalidade,creditos;
        scanf("%d", &n);
        char cursos[100],nomeDoAluno[500];
        for(i=0;i<n;i++){
            scanf("%d", &codigoDoCurso);
            scanf("%lf", &valorpCredito);
            scanf("%s", &cursos);
        }
        scanf("%d", &quantidadeDeAlunos);
        for(i=0;i<quantidadeDeAlunos;i++){
            scanf("%s", &nomeDoAluno);
            scanf("%d", &codigoDoCurso);
            scanf("%lf", &valorpCredito);
            mensalidade=creditos*valorpCredito;
            printf("Aluno(a): %s Curso: %d Num. Creditos: %.2lf Valor Credito: %.2lf Mensalidade: %.2lf\n",nomeDoAluno,codigoDoCurso,creditos,valorpCredito,mensalidade);
        }
        
    }