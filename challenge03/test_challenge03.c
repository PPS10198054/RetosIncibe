#include <stdio.h>
#include <string.h>
#include <assert.h>


size_t mi_strlen(const char *s);
int mi_strcmp(const char *s1, const char *s2);
char *mi_strcpy(char *dest, const char *src);

void test_mi_strlen() {
    assert(mi_strlen("") == strlen(""));
    assert(mi_strlen("Hola") == strlen("Hola"));
    assert(mi_strlen("Hola mundo") == strlen("Hola mundo"));
}

void test_mi_strcmp() {
    assert(mi_strcmp("Hola", "Hola") == 0);
    assert((mi_strcmp("Hola", "Holb") < 0) == (strcmp("Hola", "Holb") < 0));
    assert((mi_strcmp("Holb", "Hola") > 0) == (strcmp("Holb", "Hola") > 0));
    assert(mi_strcmp("", "") == 0);
}

void test_mi_strcpy() {
    char dest1[50];
    char dest2[50];

    mi_strcpy(dest1, "Hola");
    strcpy(dest2, "Hola");
    assert(strcmp(dest1, dest2) == 0);

    mi_strcpy(dest1, "");
    strcpy(dest2, "");
    assert(strcmp(dest1, dest2) == 0);
}

int main() {
    test_mi_strlen();
    test_mi_strcmp();
    test_mi_strcpy();

    printf("OK\n");
    return 0;
}
