#include <stdio.h>

int main() {
    double salario, iRenda;
    scanf("%lf", &salario);

    if (salario <= 2000) {
        printf("Isento\n");
    } else {
        if (salario <= 3000) {
            iRenda = 0.08 * (salario - 2000);
        } else if (salario <= 4500) {
            iRenda = 0.08 * 1000 + 0.18 * (salario - 3000);
        } else {
            iRenda = 0.08 * 1000 + 0.18 * 1500 + 0.28 * (salario - 4500);
        }

        printf("R$ %.2lf\n", iRenda);
    }

    return 0;
}
