#include <stdio.h>
int main(void) {
    int n, i;
    float valor, soma=0.0f;
    printf("Quantidade de valores: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;
    for (i=1; i<=n; i++) {
        printf("Valor %d: ", i);
        if (scanf("%f", &valor) != 1) return 1;
        soma += valor;
    }
    printf("Soma: %.2f\nMedia: %.2f\n", soma, soma/n);
    return 0;
}
