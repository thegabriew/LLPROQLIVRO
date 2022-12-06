#include<stdio.h>

int main (){
	
	int alunos;
	float media, notas, notac;
	int i = 0;
	
	
	printf("Insira a quantidade de alunos: ");
	scanf("%d",&alunos);
	
		while(i<alunos){
		printf("Insira a nota do aluno: ");
		scanf("%f",&notas);
		
		notac = notac + notas;
		i += 1; 
	
	} 
	
	media = (float) notac/alunos;
	
	printf("\nA media da turma equivale a %.2f",media);
	
}
