#include <stdio.h>

int main() {
    int i = 1, gremio, inter, totalGremio = 0, totalInter = 0, empate = 0, grenal = 0;

    while(i == 1) {
        grenal++;
        scanf("%d %d", &inter, &gremio);

        if(gremio > inter) {
            totalGremio++;
        } else if(inter > gremio) {
            totalInter++;
        } else {
            empate++;
        }

        verifica:
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &i);
            if(i != 1 && i != 2) {
                goto verifica;
            }
    }

    printf("%d grenais\n", grenal);
    printf("Inter:%d\n", totalInter);
    printf("Gremio:%d\n", totalGremio);
    printf("Empates:%d\n", empate);

    if(totalInter > totalGremio) {
        printf("Inter venceu mais\n");
    } else if(totalGremio > totalInter) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }

    return 0;
}
