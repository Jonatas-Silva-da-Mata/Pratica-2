#include <stdio.h>

int dois_numeros(int n1, int n2) {
	int calculo;
	if(n1>n2){
		calculo = n1 * 2;
		return calculo;
	} else {
		calculo = n2 * 2;
		return calculo;
	}
	
}


int main() {
	int n1, n2, x;
	printf("Digite o numero 1: ");
	scanf("%d", &n1);
	printf("Digite o numero 2: ");
	scanf("%d", &n2);
	x = dois_numeros(n1, n2);
	printf("Valor: %d", x);
	
	return 0;
}
