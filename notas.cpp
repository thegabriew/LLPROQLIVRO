#include<stdio.h>

int main (){
	
	int alunos;
	float media, notas;
	int i = 0;
	
	
	printf("Insira a quantidade de alunos: ");
	scanf("%d",&alunos);
	
	do{
		printf("Insira a nota do aluno: ");
		scanf("%d",&notas);
		
		notas = notas++;
	
	} while (i>alunos);
	
}
