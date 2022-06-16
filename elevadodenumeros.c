#include<stdio.h>
#include<math.h>
int main(){
    int n,x;
    scanf("%d",&n);
    x=2;
    while(x<=n){
        printf("%d^%d = %d\n",x,2,x*x);
        x+=2;
    }
    return 0;
}