#include <stdio.h>

int main() {
    int a, b, c, x, y, z, aux;
    scanf("%d %d %d", &a, &b, &c);

    x = a;
    y = b;
    z = c;

    if(a < b) {
        aux = a;
        a = b;
        b = aux;
    }
    if(b < c) {
        aux = b;
        b = c;
        c = aux;
    }
    if(a < b) {
        aux = a;
        a = b;
        b = aux;
    }

    printf("%d\n%d\n%d\n\n", c, b, a);
    printf("%d\n%d\n%d\n", x, y, z);

    return 0;
}
