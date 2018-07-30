#include <stdio.h>

int main() {
    int i = 0, j = 1;
    double n1, n2, nota, media;

    while(j == 1) {
        while(i < 2) {
            scanf("%lf", &nota);
            if(nota >= 0 && nota <= 10) {
                if(i == 0) {
                    n1 = nota;
                    i++;
                } else {
                    n2 = nota;
                    i++;
                }
            } else {
                printf("nota invalida\n");
            }
        }

        media = (n1+n2)/2;
        printf("media = %.2lf\n", media);
        i = 0;

        verifica:
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &j);
        if (j != 1 && j != 2) {
            goto verifica;
        }
    }

    return 0;
}
