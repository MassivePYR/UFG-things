#include <stdio.h>
#include <math.h>
int main()
{
    int x = 0;
    double a = 0.0, b = 0.0, c = 0.0, area = 0.0, perimetro = 0.0, m1 = 0.0, m2 = 0.0, m3 = 0.0;
    scanf("%lf %lf %lf",&a,&b,&c);
    m1 = abs(b-c);
    m2 = abs(a-c);
    m3 = abs(a-b);

    if ( a>m1 && a<(b+c))
    {
        x++;
    }
    if ( b>m2 && b<(a+c))
    {
        x++;
    }
    if ( c>m3 && c<(a+b))
    {
        x++;
    }
    if (x == 3)
    {
        perimetro = (a+b+c);
        printf("Perimetro = %.1lf\n", perimetro);
    }
    else
    {
        area = (((a+b)*c)/2);
        printf("Area = %.1lf\n", area);
    }
    return 0;
}