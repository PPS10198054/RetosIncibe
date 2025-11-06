#include <stdio.h>

int division(int n1, int n2) {
    if(n2 == 0) {
        printf("No se puede dividir entre 0\n");
        return 0;
    } else {
        return n1 / n2;
    }
}