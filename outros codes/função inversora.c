#include<stdio.h>
int inverte3(x){
    int c,d,u;
    c=x/100, d=x%100/10, u=x%100%10;
    return(c+d*10+u*100);
}
int main(){
    int a,out;
    scanf("%d", &a);
    out=inverte3(a);
    printf("o inverso e = %d\n",out);
}