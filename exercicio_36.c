#include <stdio.h>
int main(void) {
    int k, i, pares=0, impares=0;
    printf("Digite K (positivo): ");
    if (scanf("%d", &k) != 1 || k < 1) return 1;
    for (i=1; i<=k; i++) {
        if (i%2==0) pares++;
        else impares++;
    }
    printf("Pares: %d\nImpares: %d\n", pares, impares);
    return 0;
}
