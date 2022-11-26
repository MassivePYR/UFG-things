#include<stdio.h>
int main(){
int m,n,x=1,y=1,aux;
scanf("%d %d",&m,&n);
while(x<=m && y<=n){
    aux=x;
    if(x==y){
        x++;
        y=1;
        printf("\n");
    }
    if(x<=m && y==n){
        printf("-(%d,%d)\n", x, y);
        x++;
        y=1;
        }
    if(aux==x){printf("-");}
    if(x<=m && y<n){
        printf("(%d,%d)", x, y);
        y++;
        }
    }
}
