#include "calc.h"
#include <stdio.h>
#include <assert.h>

void test_suma(void) {
    assert(suma(2, 3) == 5);     
    assert(suma(3, -1) == 2);    
    assert(suma(-3, -5) == -8);  
}


void test_resta(void) {
    assert(resta(5, 2) == 3);     
    assert(resta(3, -1) == 4);    
    assert(resta(-3, -5) == 2);   
}


void test_multiplicacion(void) {
    assert(multiplicacion(3, 4) == 12);   
    assert(multiplicacion(3, -1) == -3);  
    assert(multiplicacion(-3, -5) == 15); 
}


void test_division(void) {
    assert(division(8, 2) == 4);    
    assert(division(3, -1) == -3);  
    assert(division(-10, -5) == 2); 
    assert(division(10, 0) == 0);
}

int main(void) {
    test_suma();
    test_resta();
    test_multiplicacion();
    test_division();
    printf("OK\n");
    return 0;
}