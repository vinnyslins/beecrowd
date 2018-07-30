#include <stdio.h>

int main()  {
    int n, fator = 1;
    scanf("%d", &n);

    while(n-1 != 0) {
        fator *= n;
        n--;
    }

    printf("%d\n", fator);

    system("pause");
    return 0;
}
