#include <stdio.h>

int main() {
    int i, j, n;
    scanf("%d", &n);

    for(i = 0, j = 1; i < n; i++, j+=4) {
        printf("%d %d %d PUM\n", j, (j+1), (j+2));
    }

    return 0;
}
