#include <stdio.h>

int main () {
    int hInicial, hFinal, mInicial, mFinal, dMinutos, dHoras;
    scanf("%d %d %d %d", &hInicial, &mInicial, &hFinal, &mFinal);

    if (hInicial < hFinal) {
        dHoras = hFinal - hInicial;
    } else {
        dHoras = 24 + hFinal - hInicial;
    }

    if (mInicial < mFinal) {
        dMinutos = mFinal - mInicial;
    } else {
        dMinutos = 60 + mFinal - mInicial;
        dHoras--;
    }

    if (hInicial == hFinal && mInicial == mFinal) {
        dHoras = 24;
        dMinutos = 0;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dHoras, dMinutos);

    return 0;
}
