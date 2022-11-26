#include <stdio.h>
#define MAX 32

int main()
{
	int num, vet[MAX],i = 0, j;
    while(scanf("%d",&num) != EOF){
	while(num>0)
    {
		vet[i] = num%2;
		i++;
		num=num/2;
	}
	for(j=i-1 ; j>=0; j--)
		printf("%d", vet[j]);
	printf("\n");i=0;
    }
	return 0;
}