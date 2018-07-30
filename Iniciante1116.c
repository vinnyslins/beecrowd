#include <stdio.h>

int main() {
    int n, x, y, i;
    double total;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        if(y == 0) {
            printf("divisao impossivel\n");
        } else {
            total = (double)x / y;
            printf("%.1lf\n", total);
        }
    }

    return 0;
}
