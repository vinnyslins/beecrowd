#include <stdio.h>

int main() {
    int i, j = 0, t, x, y, soma = 0;
    scanf("%d", &t);

    for(i = 0; i < t; i++) {
        scanf("%d %d", &x, &y);

        while(j < y) {
            if(x%2 != 0) {
                soma += x;
                j++;
            }
            x++;
        }

        printf("%d\n", soma);
        soma = 0;
        j = 0;
    }

    return 0;
}
