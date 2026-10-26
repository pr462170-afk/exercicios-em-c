#include <stdio.h>
int main(void) {
    int n, divisoes=0;
    printf("Digite um inteiro maior que 1: ");
    if (scanf("%d", &n) != 1 || n <= 1) return 1;
    while (n > 1) { n /= 2; divisoes++; }
    printf("Quantidade de divisoes por 2: %d\n", divisoes);
    return 0;
}
