#include <stdio.h>
#include <math.h>

int main() {
	
	float dep, saldo;
	int cont;
	cont = 0;
	saldo = 0;
	
	printf("digite o valor depositado: ");
	scanf("%f", &dep);
	
	while( dep > 0) {
		
		saldo = saldo + dep;
		cont = cont + 1;
		
			printf("digite o valor depositado: ");
				scanf("%f", &dep);
	}
	printf("\n o saldo do patrao e: %.2f ",saldo);
	printf("\n foram feitos %i depositos.", cont);
}
