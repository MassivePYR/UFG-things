#include<stdio.h>
#include<math.h>
 int main(){
    double v, ab, h, a;
    scanf("%lf", &h);
    scanf("%lf", &a);
    ab = (3*(pow(a,2))*(sqrt(3)))/2;
    v = (ab/3)*h;
printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", v);
return 0;
 }