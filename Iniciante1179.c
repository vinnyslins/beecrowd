#include <stdio.h>

int main() {
    int i, valor, iPar = 0, iImpar = 0, par[5], impar[5];

    for(i = 0; i < 15; i++) {
        scanf("%d", &valor);
        if(valor%2 == 0) {
            par[iPar] = valor;
            iPar++;
        } else {
            impar[iImpar] = valor;
            iImpar++;
        }

        if(iPar == 4) {
            iPar = 0;
        }
        if(iImpar == 4) {
            iImpar = 0;
        }
    }

    return 0;
}
