#include <stdio.h>
int main(void) {
    int inicio, fim, passo, i;
    printf("Limite inicial, final e passo positivo: ");
    if (scanf("%d %d %d", &inicio, &fim, &passo) != 3 || passo <= 0 || inicio > fim) return 1;
    printf("Crescente: ");
    for (i=inicio; i<=fim; i+=passo) printf("%d ", i);
    printf("\nDecrescente: ");
    for (i=fim; i>=inicio; i-=passo) printf("%d ", i);
    printf("\n");
    return 0;
}
