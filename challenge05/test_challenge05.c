#include <stdio.h>
#include <assert.h>

int suma(int a, int b);

void test_suma(void) {
    assert(suma(2, 3) == 5);
    assert(suma(3, -1) == 2);
    assert(suma(-3, -5) == -5);
}

int main(void) {
    test_suma();
    printf("OK\n");
    return 0;
}