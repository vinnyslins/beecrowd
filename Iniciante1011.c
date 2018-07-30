#include <stdio.h>
#include <stdlib.h>

int main()
{
    double raio, volume;

    scanf("%lf", &raio);

    volume = (4.0/3) * 3.14159 * raio * raio * raio;

    printf("VOLUME = %.3lf\n", volume);

    system("pause");
    return 0;
}
