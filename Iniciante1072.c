#include <stdio.h>

int main() {
    int i, n, valor, in = 0, out = 0;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &valor);
        if (valor >= 10 && valor <= 20) {
            in++;
        } else {
            out++;
        }
    }

    printf("%d in\n%d out\n", in, out);

    return 0;
}
