#include <stdio.h>

int maior_numero(int n1, int n2) {
	if (n1>n2){
			printf("%d", n1);
			return n1;
			} else {
				printf("%d", n2);
				return n2;
			}
		}

int main() {
	int n1, n2, x;
	printf("Digite o numero 1: ");
	scanf("%d", &n1);
	printf("Digite o numero 2: ");
	scanf("%d", &n2);
	x = maior_numero(n1, n2);
	
	return 0;
}
