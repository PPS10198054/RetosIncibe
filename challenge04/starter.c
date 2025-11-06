#include "calc.h"
#include <stdio.h>

#ifdef BUILD_CALC
int main(void) {
    printf("suma(2,3) = %d\n", suma(2, 3));
    printf("resta(5,2) = %d\n", resta(5, 2));
    printf("multiplicacion(3,4) = %d\n", multiplicacion(3, 4));
    printf("division(8,2) = %d\n", division(8, 2));
    return 0;
}
#endif

