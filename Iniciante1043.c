#include <stdio.h>

int main() {
    double a, b, c, valor;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a >= (b+c) || b >= (a+c) || c >= (a+b)) {
        valor = (a+b)*c/2;
        printf("Area = %.1lf\n", valor);
    } else {
        valor = a + b + c;
        printf("Perimetro = %.1lf\n", valor);
    }
    return 0;
}
