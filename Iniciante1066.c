#include <stdio.h>

int main() {
    int i, valor, par = 0, impar = 0, negativo = 0, positivo = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &valor);
        if (valor%2 == 0) {
            par++;
        } else {
            impar++;
        }
        if (valor > 0) {
            positivo++;
        } else if (valor < 0) {
            negativo++;
        }
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);

    return 0;
}
