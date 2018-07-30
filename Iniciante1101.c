#include <stdio.h>

int main() {
    int i, x, y, soma = 0;

    while(1) {
        scanf("%d %d", &x, &y);
        if(x <= 0 || y <= 0) {
            break;
        }

        if(x > y) {
            int aux = x;
            x = y;
            y = aux;
        }
        for(i = x; i <= y; i++) {
            printf("%d ", i);
            soma += i;
        }
        printf("Sum=%d\n", soma);
        soma = 0;
    }

    return 0;
}
