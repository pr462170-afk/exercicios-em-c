#include <stdio.h>
int main(void) {
    int a, b;
    printf("Digite dois inteiros positivos: ");
    if (scanf("%d %d", &a, &b) != 2 || a <= 0 || b <= 0) {
        printf("Entrada invalida.\n"); return 1;
    }
    printf("Soma: %d\nSubtracao: %d\nMultiplicacao: %d\n", a+b, a-b, a*b);
    printf("Divisao inteira: %d\nResto: %d\n", a/b, a%b);
    return 0;
}
