#include<stdio.h>
int verify(int arr[11]){
    int s1 = 0, b1, s2 = 0, b2, i = 0, k;
    for (i = 0; i < 9; i++){
        s1 += arr[i] * (i + 1);
    }
    b1 = s1 % 11;
    i = 0;
    for (k = 9; k > 0; k--){
        s2 += arr[i] * k;
        i++;
    }
    b2 = s2 % 11;
    if (b1 == 10){
        b1 = 0;
    }
    if (b2 == 10){
        b2 = 0;
    }
    if (arr[9] == b1 && arr[10] == b2){
        printf("CPF valido\n");
    }
    else{
        printf("CPF invalido\n");
    }
}

int main()
{
    int n, i, k;
    scanf("%d", &n);
    int cpf[11];
    for (i = 0; i < n; i++)
    {
        for (k = 0; k < 11; k++)
        {
            scanf("%d", &cpf[k]);
        }
        verify(cpf);
    }
}