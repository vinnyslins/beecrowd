#include <stdio.h>

int main() {
    int i = 0;
    double n1, n2, nota, media;

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

    return 0;
}
