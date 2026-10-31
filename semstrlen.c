
#include <stdio.h>

int main(void) {
    char s[50];
    int i = 0;

    scanf("%49s", s);

    while (s[i] != '\0') {
        i++;
    }

    for (i = i - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }

    printf("\n");

    return 0;
}
