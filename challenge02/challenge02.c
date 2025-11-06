#include <stdio.h>

int suma(int n1, int n2) {
	return n1 + n2;
}

int resta(int n1, int n2) {
	return n1 - n2;
}

int multiplicacion(int n1, int n2) {
	return n1 * n2;
}

int division(int n1, int n2) {
	if (n2 == 0) {
		printf("No se puede dividir entre cero");
		return 0;
	} else {
		return n1/n2;
	}
}

