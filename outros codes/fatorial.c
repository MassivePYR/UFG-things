#include<math.h>
unsigned long long fat(int n)
{
    unsigned long long fat = 1;
    int i;
    while(n>0)
    {
        fat *= n;
        n--;
    }
    return fat;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("fatorial de %.2d\n",fat(n));
}