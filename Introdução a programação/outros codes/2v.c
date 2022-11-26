#include <stdio.h>

int main(){
    int i, k, j, l, n, aux, cont = 1, aux2 = 0;
    char letra;
    scanf("%c", &letra);
    scanf("%d", &n);

    double matriz[n][n], soma = 0;
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
            scanf("%lf", &matriz[i][j]);
            }
        }
    aux = n / 2;
    switch (letra)
        {{
        case 'S':
            for (i = n - 1; i > aux; i--){
                for (k = cont; k < n - cont; k++){
                    soma += matriz[k][i];
                    }
                cont++;
            }
        printf("%.2lf\n", soma);
        return 0;
        break;

        case 'M':
        for (i = n - 1; i > aux; i--){
            for (k = cont; k < n - cont; k++){
                soma += matriz[k][i];
                aux2++;
            }
            cont++;
        }
        if(soma > 0){
            soma /= aux2;
        }
        printf("%.2lf\n", soma);
        return 0;
        }
    }
}