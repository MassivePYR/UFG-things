#include<stdio.h>
#include<math.h>
 int main(){
    int h, m, s, st;
    scanf("%d %d %d",&h, &m, &s);
    st=s+(m*60)+(h*3600);
    printf("O TEMPO EM SEGUNDOS E = %d\n",st);
 }