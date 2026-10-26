#include <stdio.h>
int main(void) {
    int numero;
    printf("Digite um inteiro: ");
    if (scanf("%d", &numero) != 1) return 1;
    if (numero % 2 == 0) printf("Par\n");
    else printf("Impar\n");
    return 0;
}
