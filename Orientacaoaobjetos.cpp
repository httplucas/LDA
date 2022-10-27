#include <stdio.h>
#include <string.h>
//1-O que o codigo deve entregar? - O algoritmo deve entregar os dados que o usuario pedir, mediante ao objeto que ele escolher

typedef struct esporte {
	int num_loja;
	char nome_loja[30];
	char endereco_loja[30];
	float faturamento;
	
} loja_esporte;

int main()
{
	loja_esporte loja;
	
	//entrada
	printf("Digite o nome da loja: ");
	scanf("%s",&loja.nome_loja);
	
	printf("Digite o endereco da loja: ");
	scanf("%s",&loja.endereco_loja);
	
	printf("Digite o faturamento da loja: ");
	scanf("%f",&loja.faturamento);
	
	printf ("Digite 0 para matriz e 1 para filial: ");
	scanf("%d",&loja.num_loja);

	if (loja.num_loja==0)
	{
		printf("Voce escolheu a loja matriz!\n");
	}
	
	else 
	{
		printf("Voce escolheu a loja filial!\n");
	}
	
	//saida
	printf("Nome da loja: %s\n",loja.nome_loja);
	printf("Endereco da loja: %s\n",loja.endereco_loja);
	printf("Faturamento da loja: %.2f\n",loja.faturamento);
	
	
	
	
	
}