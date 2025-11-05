#include <stdio.h>
#include <assert.h>

int suma(int n1, int n2);

void test_suma() {
        assert(suma(6,3) == 9);

        assert(suma(-8,3) == -5);

        assert(suma(-3,-1) == -4);
};

int main() {
        test_suma();
        printf("OK\n");
        return 0;
}
