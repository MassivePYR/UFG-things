#include <stdio.h>

int main(){
    int i, j, k, n, sena = 0, quina = 0, quadra = 0, igual = 0;
    int gabarito[6];
    int jogo[6];

    for (i = 0; i < 6; i++){
    scanf("%d", &gabarito[i]);
    }
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        for (j = 0; j < 6; j++){
        scanf("%d", &jogo[j]);
        }
        for (j = 0; j < 6; j++){
            for (k = 0; k < 6; k++){
                if (gabarito[j] == jogo[k]){
                    igual++;
                    }
            }
        }
        switch (igual){
        case 6:
            sena++;
            break;
        case 5:
            quina++;
            break;
        case 4:
            quadra++;
            break;
        }
    igual = 0;
    }
    if (sena > 0){
    printf("Houve %d acertador(es) da sena\n", sena);
        }else{
        printf("Nao houve acertador para sena\n");
    }
    if (quina > 0){
    printf("Houve %d acertador(es) da quina\n", quina);
        }else{
        printf("Nao houve acertador para quina\n");
    }
    if (quadra > 0){
    printf("Houve %d acertador(es) da quadra\n", quadra);
        }else{
        printf("Nao houve acertador para quadra\n");
    }
}