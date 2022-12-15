#include <stdio.h>

int dobro(int num) {
	int d;
	d = 2 * num;
	return d;
}
/*
int dobro = 2 * num;
	return d; */

int main() {
	int n, x;
	printf("Digite o numero: ");
	scanf("%d", &n);
	dobro(n);
	x = dobro(n);
	printf("Valor: %d", x);
	dobro(10);
	
	return 0;
}
