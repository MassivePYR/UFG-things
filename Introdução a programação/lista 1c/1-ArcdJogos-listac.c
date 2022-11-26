#include <stdio.h>

int main()
{
    int Pple = 0, jogos = 0, cont = 1;
    double Pp = 0, Pg = 0, Pa = 0, Pc = 0, Rf = 0, pop = 0, ger = 0, arc = 0, cad = 0;
    scanf("%d", &jogos);
    while (jogos != 0)
    {
        scanf("%d %lf %lf %lf %lf", &Pple, &Pp, &Pg, &Pa, &Pc);
        Pp = Pp / 100;
        Pg = Pg / 100;
        Pa = Pa / 100;
        Pc = Pc / 100;
        pop = (Pple * Pp);
        ger = (Pple * Pg);
        arc = (Pple * Pa);
        cad = (Pple * Pc);
        Rf = ((pop * 1.00) + (ger * 5.00) + (arc * 10.00) + (cad * 20.00));
        printf("A RENDA DO JOGO N. %d E = %.2lf\n", cont, Rf);
        jogos--;
        cont++;
    }
    return 0;
}