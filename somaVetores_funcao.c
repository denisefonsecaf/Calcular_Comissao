#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void comissao(float valor);

int main(){
	float vendas[5];
	float valor_venda;
	int i;
	
	setlocale (LC_ALL, "Portuguese");
	
	for(i=0; i<5; i++){
		printf("\nDigite o valor da %dª venda: ", i+1);
		fflush(stdin);
		scanf("%f", &vendas[i]);
		valor_venda += vendas[i];
	}
	
	printf("\n\nValor total das vendas: %.2f", valor_venda);
	printf("\n");
	
	comissao(valor_venda);
}

void comissao(float valor){
	float total;
	
	total = valor * 0.05;
	
	printf("\nComissão de 5%% do valor total das vendas: %.2f", total);
}
