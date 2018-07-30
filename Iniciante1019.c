#include <stdio.h>

int main() {
    int n, horas, minutos, segundos;
    scanf("%d", &n);

    horas = n/3600;
    minutos = (n%3600)/60;
    segundos = ((n%3600)%60)%60;

    printf("%d:%d:%d\n", horas, minutos, segundos);
    return 0;
}
