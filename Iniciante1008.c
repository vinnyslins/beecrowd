#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id, horas;
    double valorhora, salario;

    scanf("%d", &id);
    scanf("%d", &horas);
    scanf("%lf", &valorhora);

    salario = horas * valorhora;

    printf("NUMBER = %d\n", id);
    printf("SALARY = U$ %.2lf\n", salario);

    system("pause");
    return 0;
}
