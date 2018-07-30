#include <stdio.h>

int main() {
    int saida, tempo, fuso, hora;
    scanf("%d %d %d", &saida, &tempo, &fuso);

    hora = saida + tempo + fuso;
    if(hora > 23) {
        hora = hora%24;
    } else if (hora < 0) {
        hora = 24 + hora;
    }

    printf("%d\n", hora);

    system("pause");
    return 0;
}
