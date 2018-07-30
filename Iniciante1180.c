#include <stdio.h>

int main() {
    int i, n, menor, posicao = 0;
    scanf("%d", &n);
    int x[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    menor = x[0];

    for(i = 1; i < n; i++) {
        if(x[i] < menor) {
            menor = x[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);

    return 0;
}
