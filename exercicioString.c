#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
*	Considere a seguinte situação:
* 	Um programa que manipula strings com frequência precisa implementar as seguintes funcionalidades:
*	Calcular o tamanho da string:
*	Concatenar uma string str1 com a outra sring str2;
*	Copiar o con
*/

// Feito pelos Alun@s: Letícia Santos e Lucas Tavares

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char palavra[100];
	int contador, tamanhoPalavra=0;
	
	printf("\n");
	printf("		--------------------------------- 			\n");
	printf("	-	T A M A N H O   D A   S T R I N G 	-	\n");
	printf("		--------------------------------- 			\n");
	printf("\n");
	
	printf("- Insira uma Palavra: \n ");
	printf("\n");
	gets(palavra);	

	for(contador=0;contador<=palavra[contador];contador++){
		tamanhoPalavra++;
	}
	printf("\n");
	printf("- A palavra inserida foi [%s], que possui o tamanho [%i]!",palavra, tamanhoPalavra);
		
	
}



