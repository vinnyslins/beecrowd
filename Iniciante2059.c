#include <stdio.h>

int main() {
    int p, j1, j2, r, a, win;
    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);

    if (r == 1 && a == 0) {
        win = 1;
    } else if (r == 1 && a == 1) {
        win = 2;
    } else if (r == 0 && a == 1) {
        win = 1;
    } else {
        if (p == 1) {
            if ((j1+j2)%2 == 0) {
                win = 1;
            } else {
                win = 2;
            }
        } else {
            if ((j1+j2)%2 != 0) {
                win = 1;
            } else {
                win = 2;
            }
        }
    }

    printf("Jogador %d ganha!\n", win);
    system("pause");
    return 0;
}
