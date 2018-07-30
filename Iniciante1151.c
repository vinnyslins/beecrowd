#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int valor[n];

    for(i = 0; i < n; i++) {
        if (i < 2) {
            valor[0] = 0;
            valor[1] = 1;
        } else {
            valor[i] = valor[i-1] + valor[i-2];
        }

        if(i == n-1) {
            printf("%d\n", valor[i]);
        } else {
            printf("%d ", valor[i]);
        }
    }
    system("pause");
    return 0;
}
