#include <stdio.h>

int main() {
    int i, positivos = 0;
    double valor, soma = 0, media;

    for (i = 0; i < 6; i++) {
        scanf("%lf", &valor);
        if (valor > 0) {
           positivos++;
           soma += valor;
        }
    }

    media = soma/positivos;

    printf("%d valores positivos\n", positivos);
    printf("%.1lf\n", media);

    return 0;
}
