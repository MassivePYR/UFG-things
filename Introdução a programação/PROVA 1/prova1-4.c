#include<stdio.h>
    int main(){
        double a=0, b=0, c=0,aux=0;
        scanf("%lf %lf %lf", &a, &b, &c);
        if(c>b){
            aux=c;
            c=b;
            b=aux;
        }
        if(b>a){
            aux=a;
            a=b;
            b=aux;
        }
        if(c>b){
            aux=c;
            c=b;
            b=aux;
        }
        if(a>=(b+c)){
            printf("NAO FORMA TRIANGULO\n");
            }else{
                if(a*a<b*b+c*c){
            printf("TRIANGULO ACUTANGULO\n");
        }
                if(a==b&&b==c){
            printf("TRIANGULO EQUILATERO\n");
        }
                if(a==b&&b!=c&&a!=c || a==c&&a!=b&&c!=b || b==c&&b!=a&&c!=a){
            printf("TRIANGULO ISOSCELES\n");
        }
                if(a*a>b*b+c*c){
            printf("TRIANGULO OBTUSANGULO\n");
        }
                if(a*a==b*b+c*c){
            printf("TRIANGULO RETANGULO\n");
        }
            }
        return 0;
    }