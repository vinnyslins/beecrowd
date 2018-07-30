#include <stdio.h>

int main() {
    int t, i, j, x, soma = 0;
    scanf("%d", &t);

    for(i = 0; i < t; i++) {
        scanf("%d", &x);

        for(j = x-1; j > 0; j--) {
            if(x%j == 0) {
                soma += j;
            }
        }

        if(soma == x) {
            printf("%d eh perfeito\n", x);
        } else {
            printf("%d nao eh perfeito\n", x);
        }

        soma = 0;
    }
    return 0;
}
