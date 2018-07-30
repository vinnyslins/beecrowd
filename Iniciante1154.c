#include <stdio.h>

int main() {
    int valor = 0, qtd = 0, soma = 0;
    double media;

    while(1) {
        scanf("%d", &valor);
        if(valor >= 0) {
            soma += valor;
            qtd++;
        } else {
            break;
        }
    };

    media = (double)soma/qtd;
    printf("%.2lf\n", media);

    system("pause");
    return 0;
}
