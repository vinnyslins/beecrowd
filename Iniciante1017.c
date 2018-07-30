#include <stdio.h>

int main() {
    int tempo, velocidade, distancia;
    double qtdlitros;

    scanf("%d", &tempo);
    scanf("%d", &velocidade);

    distancia = velocidade * tempo;
    qtdlitros = distancia/12.0;

    printf("%.3lf\n", qtdlitros);
    return 0;
}
