#include <stdio.h>

int main() {
    int dInicio, dFinal, hInicio, hFinal, mInicio, mFinal, sInicio, sFinal, dias, horas, minutos, segundos, inicioSegundos, finalSegundos, totalSegundos;
    scanf("Dia %d", &dInicio);
    scanf("%d : %d : %d\n", &hInicio, &mInicio, &sInicio);
    scanf("Dia %d", &dFinal);
    scanf("%d : %d : %d", &hFinal, &mFinal, &sFinal);

    inicioSegundos = (sInicio+mInicio*60+hInicio*60*60+dInicio*60*60*24);
    finalSegundos = (sFinal+mFinal*60+hFinal*60*60+dFinal*60*60*24);

    totalSegundos = finalSegundos - inicioSegundos;
    dias = totalSegundos/(60*60*24);
    horas = (totalSegundos-dias*60*60*24)/(60*60);
    minutos = (totalSegundos-dias*60*60*24-horas*60*60)/60;
    segundos = (totalSegundos-dias*60*60*24-horas*60*60-minutos*60);

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}
