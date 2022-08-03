#include<stdio.h>
int main(){
    int a=0, b=0, i=0, j=0, u=0, v=0, con = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    int A[a], B[b],soma;
    for(i=0; i<a; i++){
        scanf("%d", A+i);
    }
    for(i=0; i<b; i++) {
        scanf("%d", B + i);
    }
    int U[a+b], I[a+b];
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            if(A[i] == B[j]){
                U[con] = A[i];
                con++;
                break;
            }
        }
    }
    con=0;
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            if(A[i] == B[j]){
                I[con] = A[i];
                con++;
                break;
            }
        }
    }
    printf("(");
    for(i=0; i<a; i++){
        if(i!=0 && i+1<=a){
            printf(",");
        }
        printf("%d", U[i]);
    }
    printf(")\n");
    printf("(");
    i=0;
    for(i=0; i<b; i++){
        if(i!=0 && i+1<=b){
            printf(",");
        }
        printf("%d", I[i]);
    }
    printf(")\n");
    return 0;
}