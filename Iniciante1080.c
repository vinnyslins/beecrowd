#include <stdio.h>

int main() {
    int i, valor, maior = 0, posicao;

    for(i = 1; i <= 100; i++) {
        scanf("%d", &valor);
        if(valor > maior) {
            maior = valor;
            posicao = i;
        }
    }

    printf("%d\n%d\n", maior, posicao);

    return 0;
}
