#include <stdio.h>
int main()
{
    double celsius, fahrenheit, aux, aux1, aux2;
    scanf("%lf", &aux2);
    while (aux2 != 0)
    {
        scanf("%lf", &fahrenheit);
        celsius = (5 * (fahrenheit - 32)) / 9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n",fahrenheit ,celsius);
        aux2--;
    }
}