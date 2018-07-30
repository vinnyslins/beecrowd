#include <stdio.h>

int main() {
    int i, n, qtd, total = 0, c = 0, r = 0, s = 0;
    char x;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d %c", &qtd, &x);
        switch(x) {
        case 'C':
            c += qtd;
            break;
        case 'R':
            r += qtd;
            break;
        case 'S':
            s += qtd;
            break;
        }
    }

    total = c + r + s;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2lf %%\n", (c*100.0/total));
    printf("Percentual de ratos: %.2lf %%\n", (r*100.0/total));
    printf("Percentual de sapos: %.2lf %%\n", (s*100.0/total));

    system("pause");
    return 0;
}
