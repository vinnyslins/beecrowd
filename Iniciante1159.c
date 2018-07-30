#include <stdio.h>

int main() {
    int x, i, soma = 0;

    while(1) {
        scanf("%d", &x);
        if(x == 0) {
            break;
        } else {
            for(i = x; i < x+10; i++) {
                if(i%2 == 0) {
                    soma += i;
                }
            }
        }

        printf("%d\n", soma);
        soma = 0;
    }

    system("pause");
    return 0;
}
