#include <stdio.h>

int main() {
    int i, x[10];
    scanf("%d", &x[0]);

    for(i = 1; i < 10; i++) {
        x[i] = x[i-1]*2;
    }

    for(i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, x[i]);
    }

    return 0;
}
