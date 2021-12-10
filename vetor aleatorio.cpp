/*
Aluno: Sebastião Oliveira Silva Neto - 2011478

Preencha um vetor de 10 valores inteiros aleatórios e escreva de forma ordenada.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	
	int vet[10],i;
	
	srand(time(NULL));
	
	for(i=1; i<11; i++){
		vet[i]=rand();
		printf("[%i]", vet[i]);
	}
	return 0;	
}
