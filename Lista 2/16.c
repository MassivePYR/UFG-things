#include<stdio.h>
int main(){
    int alunos, minA,i,cont=0,j=0;
    scanf("%d %d", &alunos, &minA);
    int tA[alunos];

    if(alunos>0&&minA>0&&alunos<=1000&&minA<=1000)
    {
        for(i=0; i<alunos; i++)
        {
            scanf("%d", &tA[i]);
            if(tA[i]<=0)
            {
                cont++;
            }
        }
        if(cont>=minA)
        {
            printf("NAO\n");
            for(j=alunos-1; j>=0; j--)
            {
                if(tA[j]<=0)
                {
                    printf("%d\n",j+1);
                }
            }
        }
        else
        {
            printf("SIM\n");
        }  
    }
    
    return 0;
}