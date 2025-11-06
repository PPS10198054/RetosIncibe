#include <stdio.h>

int suma(int a, int b) {
    return a + b;
}

#ifdef BUILD_STANDALONE
int main(void) {
    printf("add(2,3) = %d\n", suma(2,3));
    return 0;
}
#endif