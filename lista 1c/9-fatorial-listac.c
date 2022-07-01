#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    double x,y,z;
    scanf("%d", &n);
    if (n > 0)
    {
        x=n-1;
        y=n;
        while (x > 1)
        {
        y=y*x;
        x--;
        }
        printf("%d! = %.lf", n, y);
    }else if(n == 0)
    {
        printf("%d! = 1", n);
    }
}