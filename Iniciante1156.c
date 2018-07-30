#include <stdio.h>

int main() {
    double s = 1;
    int a, b;

    for(a=3, b=2; a < 40; a+=2, b*=2) {
        s += (double)a/b;
    }

    printf("%.2lf\n", s);

    return 0;
}
