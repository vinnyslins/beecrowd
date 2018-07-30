#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    double aRosa, aVioleta, aGirassol;
    double p = (a + b + c)/2.0;
    aVioleta = sqrt(p*(p-a)*(p-b)*(p-c));

    double raioMaior = a * b * c / (4 * aVioleta);
    aGirassol = M_PI * raioMaior * raioMaior;
    aGirassol = aGirassol - aVioleta;

    double raioMenor = aVioleta/p;
    aRosa = M_PI * raioMenor * raioMenor;
    aVioleta = aVioleta - aRosa;

    printf("%.4lf %.4lf %.4lf\n", aGirassol, aVioleta, aRosa);
    return 0;
}
