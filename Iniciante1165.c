#include <stdio.h>

int main() {
    int t, i, x, j, aux = 0;
    scanf("%d", &t);

    for(i = 0; i < t; i++) {
        scanf("%d", &x);

        for(j = x-1; j > 1; j--) {
            if(x%j == 0) {
                aux = 1;
                break;
            }
        }

        if(aux == 1) {
            printf("%d nao eh primo\n", x);
        } else {
            printf("%d eh primo\n", x);
        }

        aux = 0;
    }

    return 0;
}
