#include <stdio.h>
#include <locale.h>
#include <conio.h>

//definindo a struct dos itens
struct produtos{
	int arroz = 1;
	int feijao = 2;
	int macarrao = 3;
	int acucar = 4;
	int sal = 5;
	int caixa_leite = 6;
	int carne = 7;
	int chocolate = 8;
	int refrigerante = 9;
	int sorvete = 10;
	int escolha;
};
int main()
{
	//definindo linguagem e acentuação local
	setlocale(LC_ALL, "Portuguese");
	//chamando o struct
	struct produtos loja;
	
	//declarando as variaveis
	float carteira,fatura,parcelamento,cont, saldo, total, possald;
	int continuar,pagamento,senha, j;
	char conf_pagamento[30];
	
	//apresentar o mercado e a lista de produtos para o usuario
 	printf("Bem vindo ao mercadinho\n");
	printf("Digite sua quantia em dinheiro que deseja gastar: ");
	scanf("%f", &carteira);
	printf("Lista dos produtos do mercadinho: \n 1-Arroz R$4,50 \n 2-Feijão R$7 \n 3-Macarrão R$3.50 \n 4-Açúcar R$4 \n 5-Sal R$3.50 \n 6-Caixa de leite R$7 \n 7-Kg de carne R$21.50 \n 8-Chocolate R$6.50 \n 9-Refrigerante R$8 \n 10-Sorvete R$12\n");
	continuar = 1;
	
	
		do{
		
		
		printf("Digite o número do produto que deseja:  ");
		scanf("%d", &loja.escolha);
		
		//restrigindo a escolha de um produto não listado
		if(loja.escolha<1 || loja.escolha>10) {
			printf("\n!!Produto invalido, por favor selecione um de nossos produtos listados!!\n\n");
			continuar = 1;
		}
		
		//definindo valores das escolhas dos usuarios
		switch(loja.escolha){
			case 1:
				fatura += 4.50;
				
				break;
			case 2:
				fatura += 7;
			
				break;
			case 3:
				fatura += 3.5;
				
				break;
			case 4:
				fatura += 4;
				
				break;
			case 5:
				fatura += 3.50;
				
				break;
			case 6:
				fatura += 7;
			
				break;
			case 7:
				fatura += 21.50;
			
				break;
			case 8:
				fatura += 6.50;
			
				break;
			case 9:
				fatura += 8;
				
				break;
			case 10:
				fatura += 12;
			
				break;
					
			
		}
		
		printf(" Digite 1 para continuar comprando, caso queira parar, digite qualquer outro número: " );
		scanf("%d", &continuar);
			
	//continuar comprando se o usuario ainda tiver dinheiro 
	}while(continuar == 1 && carteira >= 0);       

	printf("\nA sua fatura é: %.1f\n",fatura);	
		if(fatura > carteira){
		printf("\nSaldo insuficiente para pagar a conta.");
		printf("\nInsira o valor para adicionar a sua carteira:");
		scanf("%f", &saldo);
		total = saldo + carteira;
		printf("Seu novo saldo na sua carteira é de: %.1f", total);

		
	}
	printf("\n 1-Dinheiro \n 2-Cartão de Crédito \n 3-Pix \n Como você deseja pagar?");
	scanf("%d",&pagamento);
	
	for(j=0; ; j++) {
		
		//Selecionando as formas de pagamento
		if(pagamento>3 || pagamento<1) {
		printf("A forma de pagamento escolhida não esta disponivel, por favor escolha uma das formas listadas");
		printf("\n 1-Dinheiro \n 2-Cartão de Crédito \n 3-Pix \n Como você deseja pagar?");
		scanf("%d",&pagamento);
		
			
		} else {
			//perguntando ao usuario a forma de pagamento e processando as condicionais conforme escolha
			switch (pagamento){
				case 1:
				printf("Você selecionou o pagamento por dinheiro!, Pagamento realizado com sucesso");
				printf("Compra feita com sucesso!, Volte Sempre!");
				break;
				
				case 2:
				printf("Você selecionou o pagamento por Cartão de Credito! ");
				printf("Digite quantas vezes você quer parcelar: ");
				scanf("%f",&parcelamento);
				cont = fatura / parcelamento;
				printf("Total da compra deu: %.2f x %.2f = %.2f ",fatura ,parcelamento,cont);
				printf("Porfavor Digite a sua senha:");
				scanf("%d",&senha);
				printf("Compra feita com sucesso!, Volte Sempre!");
				break;
				
				case 3:
				printf("Você selecionou o pagamento por pix!,Chave pix (numero): 987615420\n");
				printf("Compra feita com sucesso!, Volte Sempre!");
				break;			
				}	
			}
			//se pagamento for em dinheiro e tiver troco, aparecerá para o usuario
			if (pagamento==1)
			{
			possald = carteira - fatura;
			printf("\n Seu troco é de: %.1f", possald);
			}
			

	break;	
	} 	
	
}
