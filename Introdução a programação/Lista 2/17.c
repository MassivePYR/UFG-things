#include<stdio.h>
int main(){
    int n,i,j,k,cont=0;
    scanf("%d", &n);
    int num[n];
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
                cont++;
            }
            
        }
    }
    printf("%d\n", n-cont);
}