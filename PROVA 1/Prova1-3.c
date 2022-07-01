#include<stdio.h>

int main(){
    int i1, i2, d1, d2, m1, m2, a1, a2, p1, p2;
    scanf("%d %d %d %d", &i1, &d1, &m1, &a1);
    scanf("%d %d %d %d", &i2, &d2, &m2, &a2);

    p1 = (2022-a1)*365 + (12-m1)*30 + 30-d1;
    p2 = (2022-a2)*365 + (12-m2)*30 + 30-d2;

    if(p1 > p2){
        printf("O mais velho e: 1");
    }else if(p1 < p2){
        printf("O mais velho e: 2");
    }else{
        printf("Ambos possuem a mesma idade");
    }

}