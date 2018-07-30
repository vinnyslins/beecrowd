#include <stdio.h>

int main() {
    int inicio, fim, duracao;
    scanf("%d %d", &inicio, &fim);

    if (inicio < fim) {
        duracao = fim - inicio;
    } else {
        duracao = 24 + fim - inicio;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}
