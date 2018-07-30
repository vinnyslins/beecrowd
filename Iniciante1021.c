#include <stdio.h>

int main() {
    int n100, n50, n20, n10, n5, n2, m100, m50, m25, m10, m5, m1;
    double valor;
    scanf("%lf", &valor);

    int vint = valor * 100;

    n100 = vint/10000;
    n50 = (vint%10000)/5000;
    n20 = ((vint%10000)%5000)/2000;
    n10 = (((vint%10000)%5000)%2000)/1000;
    n5 = ((((vint%10000)%5000)%2000)%1000)/500;
    n2 = (((((vint%10000)%5000)%2000)%1000)%500)/200;
    m100 = ((((((vint%10000)%5000)%2000)%1000)%500)%200)/100;
    m50 = (((((((vint%10000)%5000)%2000)%1000)%500)%200)%100)/50;
    m25 = ((((((((vint%10000)%5000)%2000)%1000)%500)%200)%100)%50)/25;
    m10 = (((((((((vint%10000)%5000)%2000)%1000)%500)%200)%100)%50)%25)/10;
    m5 = ((((((((((vint%10000)%5000)%2000)%1000)%500)%200)%100)%50)%25)%10)/5;
    m1 = (((((((((((vint%10000)%5000)%2000)%1000)%500)%200)%100)%50)%25)%10)%5)/1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m100);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m5);
    printf("%d moeda(s) de R$ 0.01\n", m1);

    return 0;
}
