#include <stdio.h>

int main() {
    int i, positivos = 0;
    double valor;

    for (i = 0; i < 6; i++) {
        scanf("%lf", &valor);
        if (valor > 0) {
           positivos++;
        }
    }

    printf("%d valores positivos\n", positivos);

    return 0;
}
