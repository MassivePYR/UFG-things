#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0, m=0, c=0, d=0, u=0;
    scanf("%d", &n);

    if (n>=0 && n<10000){
        if (n>999 && n<10000)
        {
            m = n/1000, c = n%1000/100, d=n%1000%100/10, u = n%1000%100%10;
            printf("(quarta ordem) %d =", n);
        }
        if (n>99 && n<1000)
        {m = 0, c = n/100, d = (n%100)/10, u = (n%100)%10;
            printf("(terceira ordem) %d =", n);}
        if (n > 9 && n < 100)
        {
            m = 0, c = 0, d = n / 10, u = n % 10;
            printf("(segunda ordem) %d =", n);
        }
        if (n > 0 && n < 10)
        {
            m = 0, c = 0, d = 0, u = n;
            printf("(primeira ordem) %d =", n);
        }
        
        {//if do extenso

        if (m == 0){"inexistente";}
        else if(m == 1){printf(" %d unidade de milhar ",m);}
        else{ printf(" %d unidades de milhar ",m);}

        if(m>0 && c>0){printf("+");}

        if (c == 0){"inexistente";}
        else if(c == 1){printf(" %d centena ",c);}
        else{printf(" %d centenas ",c);}

        if(d>0 && c>0||m>0 && d>0){printf("+");}

        if (d == 0){"inexistente";}
        else if(d == 1){printf(" %d dezena ",d);}
        else{printf(" %d dezenas ",d);}

        if(u>0 && d>0||m>0 && u>0||c>0 && u>0){printf("+");}

        if (u == 0 && 0<n<9999){printf("=");}
        else if (u == 1){printf(" %d unidade =",u);}
        else{printf(" %d unidades =",u);}
        }    
        {//if dos numeros em soma

        if(m==0){"inexistente";}
        else if(m==1){printf(" %d ",m*1000);}
        else{printf(" %d ",m*1000);}

        if(c>0 && m>0){printf("+");}

        if(c==0){"inexistente";}
        else if(c==1){printf(" %d ",c*100);}
        else{printf(" %d ",c*100);}

        if(d>0 && c>0||m>0 && d>0){printf("+");}

        if(d==0){"inexistente";}
        else if(d==1){printf(" %d ",d*10);}
        else{printf(" %d ",d*10);}

        if(u>0 && d>0||m>0 && u>0||c>0 && u>0){printf("+");}

        if(u==0){"inexistente";}
        else if(u==1){printf(" %d",u);}
        else{printf(" %d",u);}
        }
    }else{
        printf("Numero invalido!");
    }
}