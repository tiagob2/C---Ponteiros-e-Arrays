
#include <stdio.h>

int main(void) {
    int v[4];
    double d[4];

    for (int i = 0; i < 4; i++) {
        printf("Endereco int %d: %p\n", i, (void *)&v[i]);
    }

    printf("\n");

    for (int i = 0; i < 4; i++) {
        printf("Endereco double %d: %p\n", i, (void *)&d[i]);
    }

    return 0;
}
