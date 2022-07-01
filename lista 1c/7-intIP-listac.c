#include <stdio.h>

int main()
{
    double matricula=0;
    double p1=0, p2=0, p3=0, p4=0, p5=0, p6=0, p7=0, p8=0, l1=0, l2=0, l3=0, l4=0, l5=0, TF=0, Mp=0, Ml=0, Nf=0, Pa=0;
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", &matricula, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &l1, &l2, &l3, &l4, &l5, &TF, &Pa);
    Mp = ((p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8)/ 8);
    Ml = ((l1 + l2 + l3 + l4 + l5)/5);
    Nf = (((0.7)*Mp) + ((0.15)*Ml) + ((0.15)*TF ));
    printf("Matricula: %lf, Nota Final: %.2lf, Situacao Final", matricula, Nf);
    if (Nf >= 6)
    {
        if (Pa >= 96)
        {
            printf(": APROVADO");
        }
        else
        {
            printf(": REPROVADO POR FREQUENCIA");
        }
    }
    else
    {
        if (Pa >= 96)
        {
            printf(": REPROVADO POR NOTA");
        }
        else
        {
            printf(": REPROVADO POR NOTA E POR FREQUENCIA");
        }
    }
}