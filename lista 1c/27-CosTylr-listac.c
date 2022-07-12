#include<stdio.h>
#include<math.h>
unsigned long long fat(int n)
{
    unsigned long long fat = 1;
    int i;
    while(n>0){
        fat *= n;
        n--;
    }
    return fat;
}
int main()
{
    int n, i;
    double cos=0, x;
    scanf("%lf %d",&x,&n);

    for(i=0; i<=n; i++){
    cos+=(pow((-1),i)*pow(x,2*i))/fat(2*i);
    }
    printf("cosseno(%.2lf) = %.6lf\n",x ,cos);
}