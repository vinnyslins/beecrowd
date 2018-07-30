#include <stdio.h>

int main() {
    int i, j, t, n;
    scanf("%d", &t);

    for(i = 0; i < t; i++) {
        scanf("%d", &n);

        long long int fib[n];
        fib[0] = 0;
        fib[1] = 1;

        for(j = 2; j <= n; j++) {
            fib[j] = fib[j-1] + fib[j-2];
        }

        printf("Fib(%d) = %lld\n", n, fib[n]);
    }

    return 0;
}
