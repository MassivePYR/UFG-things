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
    double e=0, x;
    scanf("%lf %d",&x,&n);

    for(i=0; i<=n; i++){
    e += pow(x,i)/fat(i);
    }
    printf("e^%.2lf = %.6lf\n",x ,e);
}