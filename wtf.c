#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    int n=0,m=0,c=0,d=0,u=0;
    char st[4];
    scanf("%d",&n);
    sprintf(st,"%d",n);
    

    switch (srtlen(st)){

    case 4:
        m=st[0];
        c=st[1];
        d=st[2];
        u=st[3];
        break;
    case 3:
        m=0;
        c=st[0];
        d=st[1];
        u=st[2];
        break;
    case 2:
        m=0;
        c=0;
        d=st[0];
        u=st[1];
        break;
    case 1:
        m=0;
        c=0;
        d=0;
        u=st[0];
        break;
    default:
        m=0;
        c=0;
        d=0;
        u=0;
        break;
    }
    printf("%d %d %d %d",m,c,d,u);




    
    }