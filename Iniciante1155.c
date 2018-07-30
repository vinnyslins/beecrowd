#include <stdio.h>

int main()  {
    int i;
    double s;

    for(i = 1; i <= 100; i++) {
        s += 1.0/i;
    }

    printf("%.2lf\n", s);

    system("pause");
    return 0;
}
