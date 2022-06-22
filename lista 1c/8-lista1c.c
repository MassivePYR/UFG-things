#include<stdio.h>
#include<math.h>
//teste 08 - lista 1c
int main (){
    int a,b,anos;
    anos=0;
    scanf("%d" "%d", &a ,&b);
    while(a<b){
        a=a*1.03;
        b=b*1.015;
        anos++;
    }
    printf("ANOS = %d", anos);
}