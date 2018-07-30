#include <stdio.h>

int main() {
    int valor, i;

    while(1) {
        scanf("%d", &valor);
        if(valor == 0) {
            break;
        } else {
            for(i = 1; i <= valor; i++) {
                if(i < valor) {
                    printf("%d ", i);
                } else {
                    printf("%d\n", i);
                }
            }
        }
    };

    system("pause");
    return 0;
}
