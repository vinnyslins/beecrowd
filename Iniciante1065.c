#include <stdio.h>

int main() {
    int i, valor, pares = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &valor);
        if (valor%2 == 0) {
           pares++;
        }
    }

    printf("%d valores pares\n", pares);

    return 0;
}
