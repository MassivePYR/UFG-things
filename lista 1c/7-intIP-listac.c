#include <stdio.h>

int main(){
    double p1, p2, p3, p4, p5, p6, p7, p8, l1, l2, l3, l4, l5, TF, Mp, Ml, Nf, Pa, fT;
    int matricula = 0;
    do
    {
        scanf("%d", &matricula);
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8);
        scanf("%lf %lf %lf %lf %lf %lf %lf", &l1, &l2, &l3, &l4, &l5, &TF, &Pa);
        Mp = (p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8) / 8;
        Ml = (l1 + l2 + l3 + l4 + l5) / 5;
        fT = 128 - Pa;
        Nf = ((Mp * 0.7) + (Ml * 0.15) + (TF * 0.15));
        if (matricula != -1)
        {
            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: ", matricula, Nf);
            if (Nf >= 6)
            {
                if (fT <= 32)
                {
                    printf("APROVADO\n");
                }
                else
                {
                    printf("REPROVADO POR FREQUENCIA\n");
                }
            }
            else
            {
                if (fT <= 32)
                {
                    printf("REPROVADO POR NOTA\n");
                }
                else
                {
                    printf("REPROVADO POR NOTA E POR FREQUENCIA\n");
                }
            }
        }
    } while (matricula != -1);

    return 0;
}