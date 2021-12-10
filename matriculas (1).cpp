/*
Aluno: Sebastião Oliveira Silva Neto - 2011478

Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas Lógica e Linguagem de Programação.
Coloque os números das matriculas dos alunos que cursam Lógica em um vetor, no máximo quinze alunos.
Coloque os números das matriculas dos alunos que cursam Linguagem de Programação em outro vetor, no máximo dez alunos.
Mostre o número das matriculas que aparecem nos dois vetores.
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

leitura(int vetor[], int numero){
	for(int i=0; i<numero; i++){
		printf("\nmatricula %i: ", i+1);
		scanf("%i", &vetor[i]);
	}
}
iguais( int i, int L[], int P[], int num){
	int resultado=0;
	for(int j=0; j<num; j++){
		if(L[i]==P[j]){
		resultado=L[i];
		printf("		[%i]", resultado);
		}
	}resultado=0;
} 

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	
	int num_L = 15;
	int num_P = 10;
	int alu_L[num_L], alu_P[num_P];
	
	printf(" *Logica*\n");
	leitura(alu_L, num_L);
	printf("\n *programação*\n");
	leitura( alu_P, num_P);
	
	printf("\n\t\tmatriculas\n");
	printf("\n----------------------------------");
	printf("\nlogica \t programção \t matriculada nas duas");
	for(int i=0; i<num_L; i++){
	if(i<num_P){
		printf("\n  [%i]\t", alu_L[i]);
		printf("  [%i]\t", alu_P[i]);
		iguais(i,  alu_P, alu_L, num_L);
	}else{
		printf("\n  [%i]\t", alu_L[i]);
	}
	}
}
