#include <stdio.h>

int main() {
    int id, qtd;
    double unidade, total;
    scanf("%d %d", &id, &qtd);

    switch(id) {
    case 1:
        unidade = 4.0;
        break;
    case 2:
        unidade = 4.5;
        break;
    case 3:
        unidade = 5.0;
        break;
    case 4:
        unidade = 2.0;
        break;
    case 5:
        unidade = 1.5;
        break;
    }

    total = unidade*qtd;
    printf("Total: R$ %.2lf\n", total);
    return 0;
}
