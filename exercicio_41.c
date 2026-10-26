#include <stdio.h>
int main(void) {
    int numero, quantidade=0, soma=0;
    printf("Digite um numero (0 encerra): ");
    if (scanf("%d", &numero) != 1) return 1;
    while (numero != 0) {
        soma += numero;
        quantidade++;
        printf("Digite outro numero (0 encerra): ");
        if (scanf("%d", &numero) != 1) return 1;
    }
    printf("Quantidade: %d\nSoma: %d\n", quantidade, soma);
    return 0;
}
