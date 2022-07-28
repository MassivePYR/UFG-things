#include <stdio.h>
#include <math.h>

int Entrada(void)
{
    int N, valido=0;
    scanf("%d", &N);
    while(valido!=1){
        if(1<=N && N<101){
            valido = 1;
            return N;
        }else{
            scanf("%d", &N);
        }
    }
}
int Capcha(int n, int N, int arr[N]){
    int i, cont = 0;
    for(i = 0; i < N; i++){
        if (arr[i] == n){
            cont++;
        }
    }
    if(cont == 0){
        return 1;
    }else{
        return 0;
    }
}

int Print(int n, int arr[n])
{
    int i;
    for(i = 0; i < n; i++){
        if(i == 0){
            printf("(");
        }
        printf("%d", arr[i]);
        if(i == n - 1){
            printf(")\n");
        }else{
            printf(",");
        }
    }
}

int Uniaof(int n1, int n2, int a[n1], int b[n2])
{
    int i, n, j=n1;
    n = n1+n2;
    int uniao[n];
    int igual[100];
    for(i = 0; i<n1; i++){
        uniao[i] = a[i];
    }
    for(i = 0; i < n2; i++){
        if(Capcha(b[i], n1, uniao)){
            uniao[j] = b[i];
            j++;
        }else{
            n--;
        }
    }
    Print(n, uniao);
}

int Intercecaof(int n1, int n2, int v1[n1], int v2[n2]){
    int i, n, j, h = 0;
    int intercecao[n1];
    for(i=0; i<n2; i++){
        for(j=0; j<n1; j++){
            if(v1[j] == v2[i]){
                intercecao[h] = v1[j];
                h++;
            }
        }
    }
    n = h;
    if(h == 0){
        printf("()\n");
    }
    Print(n, intercecao);
}

int main(){
    int n1, n2, i, k;
    n1 = Entrada();
    n2 = Entrada();
    int v1[n1];
    int v2[n2];

    for (i = 0; i < n1; i++){
        scanf("%d", &v1[i]),k=0;
        for (k=0; k<i; k++){
            if (v1[i] == v1[k]){
                scanf("%d", &v1[i]);
                k = 0;
            }
        }
    }

    for (i = 0; i < n2; i++){
        scanf("%d", &v2[i]);
        k = 0;
        for (k = 0; k < i; k++){
            if (v2[i] == v2[k]){
                scanf("%d", &v2[i]);
                k = 0;
            }
        }
    }
    Uniaof(n1, n2, v1, v2);
    Intercecaof(n1, n2, v1, v2);
}