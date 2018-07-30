#include <stdio.h>
#include <string.h>

int main() {
    char vertebra[20], classe[20], alimentacao[20];
    scanf("%s", vertebra);
    scanf("%s", classe);
    scanf("%s", alimentacao);

    if (strcmp(vertebra, "vertebrado") == 0) {
        if (strcmp(classe, "ave") == 0) {
            if (strcmp(alimentacao, "carnivoro") == 0) {
                printf("aguia\n");
            } else {
                printf("pomba\n");
            }
        } else {
            if (strcmp(alimentacao, "onivoro") == 0) {
                printf("homem\n");
            } else {
                printf("vaca\n");
            }
        }
    } else {
        if (strcmp(classe, "inseto") == 0) {
            if (strcmp(alimentacao, "hematofago") == 0) {
                printf("pulga\n");
            } else {
                printf("lagarta\n");
            }
        } else {
            if (strcmp(alimentacao, "hematofago") == 0) {
                printf("sanguessuga\n");
            } else {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
