#include <stdio.h>

int main() {
    int i, j = 0, x, y;
    scanf("%d %d", &x, &y);

    for(i = 1; i <= y; i++) {
        j++;
        if(j == x) {
            printf("%d", i);
        } else {
            printf("%d ", i);
        }

        if(j == x) {
            j = 0;
            printf("\n");
        }
    }

    return 0;
}
