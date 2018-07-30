#include <stdio.h>

int main() {
    int i, n;
    double n1, n2, n3, media;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%lf %lf %lf", &n1, &n2, &n3);
        media = (n1*2 + n2*3 + n3*5) / 10;
        printf("%.1lf\n", media);
    }

    return 0;
}
