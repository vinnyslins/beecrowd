#include <stdio.h>

int main() {
    int i, t, pa, pb, anos = 0;
    double ga, gb;
    scanf("%d", &t);

    for(i = 0; i < t; i++) {
        scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);

        while(pa <= pb) {
            pa += pa * ga/100;
            pb += pb * gb/100;
            anos++;

            if(anos > 100) {
                break;
            }
        }

        if(anos > 100) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", anos);
        }

        anos = 0;
    }
    return 0;
}
