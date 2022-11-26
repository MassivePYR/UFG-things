#include <stdio.h>
int main(){
    int vetor[32],i,j,n,cont;
    while(scanf("%d",&n) != EOF){
        if(n!=0){
        for(i=0;i<32;i++){
            if(n%2 == 0){
                n = n/2;
                vetor[i] = 0;
            }
            else{
                n = (n-1)/2;
                vetor[i] = 1;
            }
        }for(j=31;j>-1;j--){
            if(vetor[j] == 1){
                printf("1");
                cont++;
            }
            else{
                if(cont != 0){
                    printf("0");
                    cont++;
                }
            } 
        }
        printf("\n"),cont=0;
        }
        else{
            printf("0\n");
        }
    }
}
#include <stdio.h>
#define MAX 32

int main()
{
	int num = 15, vet_bin[MAX], i = 0, j;
    while(scanf("%d",&num) != EOF){
	while(num > 0)
	{
		vet_bin[i] = num % 2;
		i++;
		num = num / 2;
	}
	for(j = i ; j > 0; j--)
		printf("%d", vet_bin[j]);
	printf("\n");
    }
	return 0;
}