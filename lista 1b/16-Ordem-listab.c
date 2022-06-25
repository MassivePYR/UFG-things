#include<stdio.h>

int main(){
    char x, y, z;
    int a=0,b=0,c=0,aux=0,t=1;
    scanf("%d %d %d\n",&a,&b,&c);
    scanf("%c%c%c",&x,&y,&z);
    while (t){
    if(a>b){
        aux=a;
        a=b;
        b=aux;
    }
    if(b>c){
        aux=b;
        b=c;
        c=aux;
    }
    if(a>b){
        t++;
    }else{
        t--;
    } 
    }
    //X
    if(x=='A'){printf ("%d",a);}
    else if(x=='B'){printf ("%d",b);}
    else if(x=='C'){printf ("%d",c);}
    //Y
    if(y=='A'){printf (" %d",a);}
    else if(y=='B'){printf (" %d",b);}
    else if(y=='C'){printf (" %d",c);}
    //Z
    if(z=='A'){printf (" %d",a);}
    else if(z=='B'){printf (" %d",b);}
    else if(z=='C'){printf (" %d",c);}
    return 0;
}