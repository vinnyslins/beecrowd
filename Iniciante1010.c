#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id1, id2, qtd1, qtd2;
    double v1, v2, total;

    scanf("%d %d %lf", &id1, &qtd1, &v1);

    scanf("%d %d %lf", &id2, &qtd2, &v2);

    total = (qtd1*v1) + (qtd2*v2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    system("pause");
    return 0;
}
