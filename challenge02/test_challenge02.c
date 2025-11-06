#include <stdio.h>
#include <assert.h>

int suma(int n1, int n2);
int resta(int n1, int n2);
int multiplicacion(int n1, int n2);
int division(int n1, int n2);

void test_suma() {
	assert(suma(3,6) == 9);
	assert(suma(3, -1) == 2);
	assert(suma(-3, -5) == -8);
};

void test_resta() {
	assert(resta(3,1) == 2);
        assert(resta(3, -1) == 4);
        assert(resta(-3, -5) == 2);
};

void test_multiplicacion() {
        assert(multiplicacion(3,1) == 3);
        assert(multiplicacion(3, -1) == -3);
        assert(multiplicacion(-3, -5) == 15);
};

void test_division() {
        assert(division(3,1) == 3);
        assert(division(3, -1) == -3);
        assert(division(-10, -5) == 2);
	assert(division(10,0) == 0);
};

int main() {
	test_suma();
	test_resta();
	test_multiplicacion();
	test_division();
	printf("OK");
	return 0;
}
