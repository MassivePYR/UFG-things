#include<stdio.h>
int main(){
    int n,i,j,k,cont=0;
    scanf("%d", &n);
    int num[n];
    if(n>0&&n<=1000){
    for(i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }
    for(j=0; j<n; j++)
    {
        for(k=0; k<n; k++)
        {
            if(num[j]==num[k]&&j!=k)
            {
                num[k]=1200000;
            }
            
        }
        cont=0;
    }
    i=0;
    for(i=0; i<n; i++)
    {
        if(num[i]!=1200000)
        {
            printf("%d\n", num[i]);
        }
    }
    }
}