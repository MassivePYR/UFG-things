#include <stdio.h>

int main(){
    int n1=0, n2=0, n3=0, mmc=1, fator=2;
    scanf("%d %d %d", &n1, &n2, &n3);

    while (n1 != 1 || n2 != 1 || n3 != 1){
        if (n1 % fator == 0 || n2 % fator == 0 || n3 % fator == 0){
            mmc = mmc * fator;
            printf("%d %d %d :%d\n", n1, n2, n3, fator);

            if (n1 != 1 && n1 % fator == 0){
                n1 = n1 / fator;
            }
            if (n2 != 1 && n2 % fator == 0){
                n2 = n2 / fator;
            }
            if (n3 != 1 && n3 % fator == 0){
                n3 = n3 / fator;
            }
        }
        else
        {
            fator++;
        }
    }
    printf("MMC: %d\n", mmc);
}