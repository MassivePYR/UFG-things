//programa que le o valor do salario minimo e calcula o valor do kw e o valor do consumo total da casa.
//O programa deve mostrar o valor do kw, o valor do consumo total da casa e o valor do desconto.
//com desconto de 10%
 #include <stdio.h>
    int main()
    {
    	float salario, kw, consumo, desconto, total;
    	printf("Digite o valor do salario minimo: ");
    	scanf("%f", &salario);
    	printf("Digite o valor do kw: ");
    	scanf("%f", &kw);
    	printf("Digite o valor do consumo: ");
    	scanf("%f", &consumo);
    	desconto = salario * 0.1;
    	total = (kw * consumo) - desconto;
    	printf("O valor do desconto e: %.2f\n", desconto);
    }