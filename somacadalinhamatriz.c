
#include <stdio.h>

int main(void) {
    int m[3][3];
    int soma;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        soma = 0;

        for (int j = 0; j < 3; j++) {
            soma += m[i][j];
        }

        printf("Soma da linha %d: %d\n", i, soma);
    }

    return 0;
}
