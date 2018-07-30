#include <stdio.h>

int main() {
    int x, y, i, soma = 0;
    scanf("%d %d", &x, &y);

    if (x > y) {
        int aux = y;
        y = x;
        x = aux;
    }

    for (i = x+1; i < y; i++) {
        if (i%2 != 0) {
            soma = soma + i;;
        }
    }

    printf("%d\n", soma);

    return 0;
}
