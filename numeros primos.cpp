/* 	/
	/ data: 22/10/2021
	/nome: Sebasti�o Oliveira
	/ Fa�a um algoritmo que mostre os n�meros primos de 1 at� 500;
*/
#include <stdio.h>

int main(void) {
	int min, max, i, j, primo;
	scanf("%i %i", &min, &max);
	
	for (i = min; i <= max; i++) {
		if (i == 0 || i == 1) {
			primo = 0;
		} else {
			primo = 1; 
			for(j = 2; j < i; j++) {
				if (i % j == 0) {
					primo = 0; 
				}
			}
		}
		if (primo == 1) {
			printf("%i ", i);
		}
	}
	
	return 0;
}
