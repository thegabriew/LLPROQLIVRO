#include<stdio.h>

int main (){
	
	int cod, nasc, cont;
	
	printf("Insira o codigo do trabalhador: ");
	scanf("%d",&cod);
	printf("\nInsira o ano de nascimento: ");
	scanf("%d",&nasc);
	printf("\nInsira o ano em que o trabalhador foi contratado: ");
	scanf("%d",&cont);
	
	
	if(nasc<=1957){
		
		printf("Requerer aposentadoria");
	} else  if(cont<=1990){
		printf("Requerer aposentadoria");

	} else if( (nasc<=1960)&& (cont<=1995)){
		printf("\nRequerer aposentadoria");

	}
	 else {
		printf("\nNao requerer aposentadoria");
	}
}
