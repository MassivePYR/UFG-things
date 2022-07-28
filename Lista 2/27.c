#include <stdio.h>
#include <math.h>

int main(){
    int q1, q2, q3, i, k, aux;
    scanf("%d", &q1);
    scanf("%d", &q2);
    q3 = q1 + q2;
    int v1[q1];
    int v2[q2];
    int v3[q3];
    for (i = 0; i < q1; i++){
        scanf("%d", &v1[i]);
    }

    for (i = 0; i < q2; i++){
        scanf("%d", &v2[i]);
    }

    for (i = 0; i < q1; i++){
        v3[i] = v1[i];
    }

    for (i = 0; i < q2; i++){
    v3[i + q1] = v2[i];
    }

    for (i = 0; i < q3; i++){
        for (k = i + 1; k < q3; k++){
        if (v3[i] > v3[k]){
            aux = v3[i];
            v3[i] = v3[k];
            v3[k] = aux;
            }
        }
    }
    for (i = 0; i < q3; i++){
        printf("%d\n", v3[i]);
    }
}