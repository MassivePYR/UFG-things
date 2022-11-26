#include<stdio.h>
#include<math.h>
int main(){
    double c, f;
    int b=0;
    scanf("%d",&b);
    while(b--){
        scanf("%lf",&f);
        c=5*(f-32)/9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n",f,c);
}
return 0;
}