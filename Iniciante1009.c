#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[30];
    double salariofixo, totalvendas, bonusvendas, salariototal;

    scanf("%s", nome);
    scanf("%lf", &salariofixo);
    scanf("%lf", &totalvendas);

    bonusvendas = totalvendas*0.15;
    salariototal = salariofixo + bonusvendas;

    printf("TOTAL = R$ %.2lf\n", salariototal);

    system("pause");
    return 0;
}
